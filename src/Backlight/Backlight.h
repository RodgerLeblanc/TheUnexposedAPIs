/*
 * Backlight.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef BACKLIGHT_H_
#define BACKLIGHT_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QProcess>
#include <QTimer>

class Backlight : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double displayCurrentBrightness READ displayCurrentBrightness NOTIFY displayCurrentBrightnessChanged);
    Q_PROPERTY(double keypadCurrentBrightness READ keypadCurrentBrightness NOTIFY keypadCurrentBrightnessChanged);

public:
    Backlight(QObject *_parent = 0);

    Q_INVOKABLE void setBrightnessForThisAppOnly(const double& brightness);
    Q_INVOKABLE void setDisplayBrightness(const double& brightness);
    Q_INVOKABLE void setKeypadBrightness(const double& brightness);

    double displayCurrentBrightness() { return m_displayCurrentBrightness; }
    double keypadCurrentBrightness() { return m_keypadCurrentBrightness; }
    void start(const QString& cmd, const QString& args);

private slots:
    void onDisplayPpsFileReady(const QVariantMap&);
    void onFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void onKeypadPpsFileReady(const QVariantMap&);
    void setback();

private:
    double m_displayCurrentBrightness;
    double m_keypadCurrentBrightness;
    double m_setbackValue;

    PpsWatch* m_displayBacklight;
    PpsWatch* m_keypadBacklight;
    QTimer* m_processTimer;
    QTimer* m_setbackTimer;

signals:
    void displayCurrentBrightnessChanged(double&);
    void keypadCurrentBrightnessChanged(double&);
};

#endif /* BACKLIGHT_H_ */
