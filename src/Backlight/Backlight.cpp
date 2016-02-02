/*
 * Backlight.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

/*
 *
 * Needs LIBS += -lscreen to your pro file
 *
 */


#include <screen/screen.h>
#include <src/Backlight/Backlight.h>
#include <bb/cascades/Application>
#include <bb/cascades/Window>
#include <QDebug>

Backlight::Backlight(QObject *_parent) :
    QObject(_parent),
    m_setbackValue(50),
    m_displayBacklight(new PpsWatch("/pps/services/backlight/display0/state", this)),
    //m_keypadBacklight(new PpsWatch("/pps/services/backlight/keypad0/state", this)), // Not readable unfortunately
    m_processTimer(new QTimer(this)),
    m_setbackTimer(new QTimer(this))
{
    connect(m_displayBacklight, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onDisplayPpsFileReady(const QVariantMap&)));
    //connect(m_keypadBacklight, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onKeypadPpsFileReady(const QVariantMap&)));

    m_setbackTimer->setInterval(10000);
    m_setbackTimer->setSingleShot(true);
    connect(m_setbackTimer, SIGNAL(timeout()), this, SLOT(setback()));
}

void Backlight::onDisplayPpsFileReady(const QVariantMap& map) {
    if (map.contains("CurrentBrightness")) {
        if (m_displayCurrentBrightness != map["CurrentBrightness"].toDouble()) {
            m_displayCurrentBrightness = map["CurrentBrightness"].toDouble();
            emit displayCurrentBrightnessChanged(m_displayCurrentBrightness);

            // Uncomment at your own risk
//            if (m_displayCurrentBrightness != m_setbackValue)
//                start("bkltctl", QString("brightness,set_brightness,display," + QString::number(m_setbackValue)));
        }
    }
}

void Backlight::onFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    Q_UNUSED(exitCode);

    QProcess *myProcess = static_cast<QProcess*>(sender());

    QByteArray se = (exitStatus == QProcess::NormalExit) ? myProcess->readAllStandardError() : "Command crashed or stopped after timeout";
    QByteArray so = myProcess->readAllStandardOutput();
    QByteArray all = myProcess->readAll();

    myProcess->deleteLater();

    qDebug() << se << so << all;

    if (m_processTimer->isActive())
        m_processTimer->stop();
}

void Backlight::onKeypadPpsFileReady(const QVariantMap& map) {
    if (map.contains("CurrentBrightness")) {
        if (m_keypadCurrentBrightness != map["CurrentBrightness"].toDouble()) {
            m_keypadCurrentBrightness = map["CurrentBrightness"].toDouble();
            emit keypadCurrentBrightnessChanged(m_keypadCurrentBrightness);
        }
    }
}

void Backlight::setback() {
    m_setbackValue = 50;
    start("bkltctl", QString("brightness,set_brightness,display," + QString::number(m_setbackValue)));
}

void Backlight::setBrightnessForThisAppOnly(const double& brightness) {
    // level should be between -255 and 255
    int level = (brightness / 100.0) * (255 * 2) - 255;
    screen_set_window_property_iv(bb::cascades::Application::instance()->mainWindow()->handle(), SCREEN_PROPERTY_BRIGHTNESS, &level);
}

void Backlight::setDisplayBrightness(const double& brightness) {
    m_setbackTimer->start();

    m_setbackValue = brightness;
    start("bkltctl", QString("brightness,set_brightness,display," + QString::number(brightness)));
}

void Backlight::setKeypadBrightness(const double& brightness) {
    start("bkltctl", QString("brightness,set_brightness,keypad0," + QString::number(brightness)));
}

void Backlight::start(const QString& cmd, const QString& args) {
    QProcess *myProcess = new QProcess(this);
    connect(myProcess, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(onFinished(int, QProcess::ExitStatus)));

    if (args.isEmpty())
        myProcess->start(cmd);
    else
        myProcess->start(cmd, args.split(","));

    myProcess->waitForStarted();
    qDebug() << "Error:" << myProcess->error() << myProcess->errorString();
    if (myProcess->error() >= 0) {
        connect(m_processTimer, SIGNAL(timeout()), myProcess, SLOT(deleteLater()));
        m_processTimer->setSingleShot(true);
        m_processTimer->start(10000);
    }
}
