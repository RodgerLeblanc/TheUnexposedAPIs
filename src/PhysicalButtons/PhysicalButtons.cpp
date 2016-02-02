/*
 * PhysicalButtons.cpp
 *
 *  Created on: 2015-06-05
 *      Author: Roger
 */

#include <src/PhysicalButtons/PhysicalButtons.h>

#include <QDateTime>

PhysicalButtons::PhysicalButtons(QObject *_parent) {
    if (_parent)
        this->setParent(_parent);

    m_ppsObject = new bb::PpsObject("/pps/system/buttons/status?wait,delta", this);
    connect(m_ppsObject, SIGNAL(readyRead()), this, SLOT(onPpsReadyRead()));

    if(!m_ppsObject->open(bb::PpsOpenMode::Subscribe)) {
        emit logMessage("Could not connect to Buttons object: " + m_ppsObject->errorString());

        this->deleteLater();
    }

    m_minusButtonTimer = new QTimer(this);
    m_minusButtonTimer->setSingleShot(true);
    m_minusButtonTimer->setInterval(LONG_PRESS_INTERVAL);
    connect(m_minusButtonTimer, SIGNAL(timeout()), this, SLOT(onMinusButtonTimeout()));

    m_playpauseButtonTimer = new QTimer(this);
    m_playpauseButtonTimer->setSingleShot(true);
    m_playpauseButtonTimer->setInterval(LONG_PRESS_INTERVAL);
    connect(m_playpauseButtonTimer, SIGNAL(timeout()), this, SLOT(onPlaypauseButtonTimeout()));

    m_plusButtonTimer = new QTimer(this);
    m_plusButtonTimer->setSingleShot(true);
    m_plusButtonTimer->setInterval(LONG_PRESS_INTERVAL);
    connect(m_plusButtonTimer, SIGNAL(timeout()), this, SLOT(onPlusButtonTimeout()));

    m_powerButtonTimer = new QTimer(this);
    m_powerButtonTimer->setSingleShot(true);
    m_powerButtonTimer->setInterval(LONG_PRESS_INTERVAL);
    connect(m_powerButtonTimer, SIGNAL(timeout()), this, SLOT(onPowerButtonTimeout()));

    m_softResetButtonsTimer = new QTimer(this);
    m_softResetButtonsTimer->setSingleShot(true);
    m_softResetButtonsTimer->setInterval(LONG_PRESS_INTERVAL);
    connect(m_softResetButtonsTimer, SIGNAL(timeout()), this, SLOT(onSoftResetButtonsTimeout()));

    m_buttonIsUpMap.insert("lastMinusPress", QDateTime::currentDateTime().addDays(-1));
    m_buttonIsUpMap.insert("lastPlaypausePress", QDateTime::currentDateTime().addDays(-1));
    m_buttonIsUpMap.insert("lastPlusPress", QDateTime::currentDateTime().addDays(-1));
    m_buttonIsUpMap.insert("lastPowerPress", QDateTime::currentDateTime().addDays(-1));
}

PhysicalButtons::~PhysicalButtons()
{
    delete m_ppsObject;
    m_ppsObject = NULL;
}

void PhysicalButtons::onPpsReadyRead() {
    bool readOk;
    QByteArray data = m_ppsObject->read(&readOk);
    if(!readOk) { return; }

    bool decodeOk;
    const QVariantMap map = bb::PpsObject::decode(data, &decodeOk);
    if(!decodeOk) { return; }

    const QVariantMap ppsFile = map["@status"].toMap();
    if (ppsFile.isEmpty()) { return; }

    if (ppsFile.contains("bid_minus")) {
        if (m_minusButtonIsUp != (ppsFile["bid_minus"].toString() == "b_up")) {
            m_minusButtonIsUp = (ppsFile["bid_minus"].toString() == "b_up");
            emit minusButtonIsUpChanged(m_minusButtonIsUp);

            if (m_minusButtonIsUp) {
                if (m_minusButtonTimer->isActive()) {
                    m_minusButtonTimer->stop();
                }
            }
            else {
                emit logMessage("-- minus button pressed --");
                emit minusButtonPressed();

                if (m_buttonIsUpMap["lastMinusPress"].toDateTime().secsTo(QDateTime::currentDateTime()) < DOUBLE_CLICK_INTERVAL) {
                    emit logMessage("-- minus button double pressed --");
                    emit minusButtonDoublePressed();

                    // Reinit
                    m_buttonIsUpMap["lastMinusPress"] = QDateTime::currentDateTime().addDays(-1);
                }
                else {
                    m_buttonIsUpMap["lastMinusPress"] = QDateTime::currentDateTime();
                }

                m_minusButtonTimer->start();
            }
        }
    }

    if (ppsFile.contains("bid_playpause")) {
        if (m_playpauseButtonIsUp != (ppsFile["bid_playpause"].toString() == "b_up")) {
            m_playpauseButtonIsUp = (ppsFile["bid_playpause"].toString() == "b_up");
            emit playpauseButtonIsUpChanged(m_playpauseButtonIsUp);

            if (m_playpauseButtonIsUp) {
                if (m_playpauseButtonTimer->isActive()) {
                    m_playpauseButtonTimer->stop();
                }
            }
            else {
                emit logMessage("-- playpause button pressed --");
                emit playpauseButtonPressed();

                if (m_buttonIsUpMap["lastPlaypausePress"].toDateTime().secsTo(QDateTime::currentDateTime()) < DOUBLE_CLICK_INTERVAL) {
                    emit logMessage("-- playpause button double pressed --");
                    emit playpauseButtonDoublePressed();

                    // Reinit
                    m_buttonIsUpMap["lastPlaypausePress"] = QDateTime::currentDateTime().addDays(-1);
                }
                else {
                    m_buttonIsUpMap["lastPlaypausePress"] = QDateTime::currentDateTime();
                }

                m_playpauseButtonTimer->start();
            }
        }
    }

    if (ppsFile.contains("bid_plus")) {
        if (m_plusButtonIsUp != (ppsFile["bid_plus"].toString() == "b_up")) {
            m_plusButtonIsUp = (ppsFile["bid_plus"].toString() == "b_up");
            emit plusButtonIsUpChanged(m_plusButtonIsUp);

            if (m_plusButtonIsUp) {
                if (m_plusButtonTimer->isActive()) {
                    m_plusButtonTimer->stop();
                }
            }
            else {
                emit logMessage("-- plus button pressed --");
                emit plusButtonPressed();

                if (m_buttonIsUpMap["lastPlusPress"].toDateTime().secsTo(QDateTime::currentDateTime()) < DOUBLE_CLICK_INTERVAL) {
                    emit logMessage("-- plus button double pressed --");
                    emit plusButtonDoublePressed();

                    // Reinit
                    m_buttonIsUpMap["lastPlusPress"] = QDateTime::currentDateTime().addDays(-1);
                }
                else {
                    m_buttonIsUpMap["lastPlusPress"] = QDateTime::currentDateTime();
                }

                m_plusButtonTimer->start();
            }
        }
    }

    if (ppsFile.contains("bid_power")) {
        if (m_powerButtonIsUp != (ppsFile["bid_power"].toString() == "b_up")) {
            m_powerButtonIsUp = (ppsFile["bid_power"].toString() == "b_up");
            emit powerButtonIsUpChanged(m_powerButtonIsUp);

            if (m_powerButtonIsUp) {
                if (m_powerButtonTimer->isActive()) {
                    m_powerButtonTimer->stop();
                }
            }
            else {
                emit logMessage("-- power button pressed --");
                emit powerButtonPressed();

                if (m_buttonIsUpMap["lastPowerPress"].toDateTime().secsTo(QDateTime::currentDateTime()) < DOUBLE_CLICK_INTERVAL) {
                    emit logMessage("-- power button double pressed --");
                    emit powerButtonDoublePressed();

                    // Reinit
                    m_buttonIsUpMap["lastPowerPress"] = QDateTime::currentDateTime().addDays(-1);
                }
                else {
                    m_buttonIsUpMap["lastPowerPress"] = QDateTime::currentDateTime();
                }

                m_powerButtonTimer->start();
            }
        }
    }

    if (!m_minusButtonIsUp && !m_plusButtonIsUp) {
        emit logMessage("-- screenshot buttons pressed --");
        emit screenshotButtonsPressed();

        m_softResetButtonsTimer->start();
    }
    else {
        if (m_softResetButtonsTimer->isActive()) {
            m_softResetButtonsTimer->stop();
        }
    }
}

void PhysicalButtons::onMinusButtonTimeout() {
    emit logMessage("-- minus button long pressed --");
    emit minusButtonLongPressed();
}

void PhysicalButtons::onPlaypauseButtonTimeout() {
    emit logMessage("-- playpause button long pressed --");
    emit playpauseButtonLongPressed();
}

void PhysicalButtons::onPlusButtonTimeout() {
    emit logMessage("-- plus button long pressed --");
    emit plusButtonLongPressed();
}

void PhysicalButtons::onPowerButtonTimeout() {
    emit logMessage("-- power button long pressed --");
    emit powerButtonLongPressed();
}

void PhysicalButtons::onSoftResetButtonsTimeout() {
    emit logMessage("-- soft reset buttons long pressed --");
    emit softResetButtonsLongPressed();
}
