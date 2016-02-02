/*
 * BatteryManager.cpp
 *
 *  Created on: 2016-01-30
 *      Author: Roger
 */

#include "BatteryManager.h"

BatteryManager::BatteryManager(QObject *_parent) :
    QObject(_parent),
    m_lastPpsDateTime(QDateTime::currentDateTime()),
    m_batteryManager(new PpsWatch("/pps/system/BattMgr/status", this))
{
    connect(m_batteryManager, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void BatteryManager::onPpsFileReady(const QVariantMap& map) {
    const QVariantMap batteryInfo = map["BatteryInfo"].toMap();
    QVariantMap batteryStatus;
    if (!batteryInfo.isEmpty()) {
        const QVariantList batteryStatusList = batteryInfo["BatteryStatus"].toList();
        if (!batteryStatusList.isEmpty())
            batteryStatus = batteryStatusList.first().toMap();
    }

    const QVariantMap chargerInfo = map["ChargerInfo"].toMap();
    QVariantMap chargerParams;
    if (!chargerInfo.isEmpty()) {
        const QVariantList chargerParamsList = chargerInfo["ChargerParams"].toList();
        if (!chargerParamsList.isEmpty())
            chargerParams = chargerParamsList.first().toMap();
    }

    const QVariantMap inputSourceInfo = map["InputSourceInfo"].toMap();
    QVariantMap pwrSourceParameters;
    if (!inputSourceInfo.isEmpty()) {
        const QVariantList pwrSourceParametersList = batteryInfo["PwrSourceParameters"].toList();
        if (!pwrSourceParametersList.isEmpty())
            pwrSourceParameters = pwrSourceParametersList.first().toMap();
    }

    const QVariantMap systemInfo = map["SystemInfo"].toMap();



    // BatteryInfo

    if (batteryInfo.contains("BatteryState")) {
        if (m_batteryState != batteryInfo["BatteryState"].toString()) {
            m_batteryState = batteryInfo["BatteryState"].toString();
            emit batteryStateChanged(m_batteryState);
        }
    }

    if (batteryInfo.contains("NumOfBattery")) {
        if (m_numOfBattery != batteryInfo["NumOfBattery"].toInt()) {
            m_numOfBattery = batteryInfo["NumOfBattery"].toInt();
            emit numOfBatteryChanged(m_numOfBattery);
        }
    }

    if (batteryInfo.contains("ActiveBattery")) {
        if (m_activeBattery != batteryInfo["ActiveBattery"].toInt()) {
            m_activeBattery = batteryInfo["ActiveBattery"].toInt();
            emit activeBatteryChanged(m_activeBattery);
        }
    }

    if (batteryStatus.contains("BatteryName")) {
        if (m_batteryName != batteryStatus["BatteryName"].toString()) {
            m_batteryName = batteryStatus["BatteryName"].toString();
            emit batteryNameChanged(m_batteryName);
        }
    }

    if (batteryStatus.contains("BatteryPresent")) {
        if (m_batteryPresent != (batteryStatus["BatteryPresent"].toString() == "YES")) {
            m_batteryPresent = (batteryStatus["BatteryPresent"].toString() == "YES");
            emit batteryPresentChanged(m_batteryPresent);
        }
    }

    if (batteryStatus.contains("BatteryId")) {
        if (m_batteryId != batteryStatus["BatteryId"].toInt()) {
            m_batteryId = batteryStatus["BatteryId"].toInt();
            emit batteryIdChanged(m_batteryId);
        }
    }

    if (batteryStatus.contains("StateOfBattery")) {
        if (m_stateOfBattery != batteryStatus["StateOfBattery"].toString()) {
            m_stateOfBattery = batteryStatus["StateOfBattery"].toString();
            emit stateOfBatteryChanged(m_stateOfBattery);
        }
    }


    if (batteryStatus.contains("StateOfCharge")) {
        if (m_stateOfCharge != batteryStatus["StateOfCharge"].toInt()) {
            m_stateOfCharge = batteryStatus["StateOfCharge"].toInt();
            emit stateOfChargeChanged(m_stateOfCharge);
        }
    }

    if (batteryStatus.contains("StateOfHealth")) {
        if (m_stateOfHealth != batteryStatus["StateOfHealth"].toInt()) {
            m_stateOfHealth = batteryStatus["StateOfHealth"].toInt();
            emit stateOfHealthChanged(m_stateOfHealth);
        }
    }

    if (batteryStatus.contains("BatteryVoltage")) {
        if (m_batteryVoltage != batteryStatus["BatteryVoltage"].toInt()) {
            m_batteryVoltage = batteryStatus["BatteryVoltage"].toInt();
            emit batteryVoltageChanged(m_batteryVoltage);
        }
    }

    if (batteryStatus.contains("TimeToEmpty")) {
        if (m_timeToEmpty != batteryStatus["TimeToEmpty"].toInt()) {
            m_timeToEmpty = batteryStatus["TimeToEmpty"].toInt();
            emit timeToEmptyChanged(m_timeToEmpty);
        }
    }

    if (batteryStatus.contains("TimeToFull")) {
        if (m_timeToFull != batteryStatus["TimeToFull"].toInt()) {
            m_timeToFull = batteryStatus["TimeToFull"].toInt();
            emit timeToFullChanged(m_timeToFull);
        }
    }

    if (batteryStatus.contains("AvailableEnergy")) {
        if (m_availableEnergy != batteryStatus["AvailableEnergy"].toInt()) {
            m_availableEnergy = batteryStatus["AvailableEnergy"].toInt();
            emit availableEnergyChanged(m_availableEnergy);
        }
    }

    if (batteryStatus.contains("AverageCurrent")) {
        if (m_averageCurrent != batteryStatus["AverageCurrent"].toInt()) {
            m_averageCurrent = batteryStatus["AverageCurrent"].toInt();
            emit averageCurrentChanged(m_averageCurrent);
        }
    }

    if (batteryStatus.contains("AveragePower")) {
        if (m_averagePower != batteryStatus["AveragePower"].toInt()) {
            m_averagePower = batteryStatus["AveragePower"].toInt();
            emit averagePowerChanged(m_averagePower);
        }
    }

    if (batteryStatus.contains("BatteryAlert")) {
        if (m_batteryAlert != (batteryStatus["BatteryAlert"].toString() != "NO")) {
            m_batteryAlert = (batteryStatus["batteryAlert"].toString() != "NO");
            emit batteryAlertChanged(m_batteryAlert);
        }
    }

    if (batteryStatus.contains("CycleCount")) {
        if (m_cycleCount != batteryStatus["CycleCount"].toInt()) {
            m_cycleCount = batteryStatus["CycleCount"].toInt();
            emit cycleCountChanged(m_cycleCount);
        }
    }

    if (batteryStatus.contains("Temperature")) {
        if (m_temperature != batteryStatus["Temperature"].toInt()) {
            m_temperature = batteryStatus["Temperature"].toInt();
            emit temperatureChanged(m_temperature);
        }
    }

    if (batteryStatus.contains("DesignCapacity")) {
        if (m_designCapacity != batteryStatus["DesignCapacity"].toInt()) {
            m_designCapacity = batteryStatus["DesignCapacity"].toInt();
            emit designCapacityChanged(m_designCapacity);
        }
    }

    if (batteryStatus.contains("FullAvailableCap")) {
        if (m_fullAvailableCap != batteryStatus["FullAvailableCap"].toInt()) {
            m_fullAvailableCap = batteryStatus["FullAvailableCap"].toInt();
            emit fullAvailableCapChanged(m_fullAvailableCap);
        }
    }

    if (batteryStatus.contains("FullChargeCap")) {
        if (m_fullChargeCap != batteryStatus["FullChargeCap"].toInt()) {
            m_fullChargeCap = batteryStatus["FullChargeCap"].toInt();
            emit fullChargeCapChanged(m_fullChargeCap);
        }
    }

    if (batteryStatus.contains("MaxLoadCurrent")) {
        if (m_maxLoadCurrent != batteryStatus["MaxLoadCurrent"].toInt()) {
            m_maxLoadCurrent = batteryStatus["MaxLoadCurrent"].toInt();
            emit maxLoadCurrentChanged(m_maxLoadCurrent);
        }
    }

    if (batteryStatus.contains("MaxLoadTimeToEmpty")) {
        if (m_maxLoadTimeToEmpty != batteryStatus["MaxLoadTimeToEmpty"].toInt()) {
            m_maxLoadTimeToEmpty = batteryStatus["MaxLoadTimeToEmpty"].toInt();
            emit maxLoadTimeToEmptyChanged(m_maxLoadTimeToEmpty);
        }
    }

    if (batteryStatus.contains("NominalAvailableCap")) {
        if (m_nominalAvailableCap != batteryStatus["NominalAvailableCap"].toInt()) {
            m_nominalAvailableCap = batteryStatus["NominalAvailableCap"].toInt();
            emit nominalAvailableCapChanged(m_nominalAvailableCap);
        }
    }

    if (batteryStatus.contains("TimeToEmptyAtConstPwr")) {
        if (m_timeToEmptyAtConstPwr != batteryStatus["TimeToEmptyAtConstPwr"].toInt()) {
            m_timeToEmptyAtConstPwr = batteryStatus["TimeToEmptyAtConstPwr"].toInt();
            emit timeToEmptyAtConstPwrChanged(m_timeToEmptyAtConstPwr);
        }
    }




    // ChargerInfo

    if (chargerInfo.contains("ChargerState")) {
        if (m_chargerState != chargerInfo["ChargerState"].toString()) {
            m_chargerState = chargerInfo["ChargerState"].toString();
            emit chargerStateChanged(m_chargerState);
        }
    }

    if (chargerInfo.contains("NumOfSource")) {
        if (m_numOfSource != chargerInfo["NumOfSource"].toInt()) {
            m_numOfSource = chargerInfo["NumOfSource"].toInt();
            emit numOfSourceChanged(m_numOfSource);
        }
    }

    if (chargerInfo.contains("ActiveCharger")) {
        if (m_activeCharger != chargerInfo["ActiveCharger"].toInt()) {
            m_activeCharger = chargerInfo["ActiveCharger"].toInt();
            emit activeChargerChanged(m_activeCharger);
        }
    }

    if (chargerParams.contains("ChargerStatus")) {
        if (m_chargerStatus != chargerParams["ChargerStatus"].toString()) {
            m_chargerStatus = chargerParams["ChargerStatus"].toString();
            emit chargerStatusChanged(m_chargerStatus);
        }
    }

    if (chargerParams.contains("MaxInputCurrent")) {
        if (m_maxInputCurrent != chargerParams["MaxInputCurrent"].toInt()) {
            m_maxInputCurrent = chargerParams["MaxInputCurrent"].toInt();
            emit maxInputCurrentChanged(m_maxInputCurrent);
        }
    }

    if (chargerParams.contains("MaxChargeCurrent")) {
        if (m_maxChargeCurrent != chargerParams["MaxChargeCurrent"].toInt()) {
            m_maxChargeCurrent = chargerParams["MaxChargeCurrent"].toInt();
            emit maxChargeCurrentChanged(m_maxChargeCurrent);
        }
    }

    if (chargerParams.contains("ChargerName")) {
        if (m_chargerName != chargerParams["ChargerName"].toString()) {
            m_chargerName = chargerParams["ChargerName"].toString();
            emit chargerNameChanged(m_chargerName);
        }
    }




    // InputSourceInfo

    if (inputSourceInfo.contains("NumOfPwrSource")) {
        if (m_numOfPwrSource != inputSourceInfo["NumOfPwrSource"].toInt()) {
            m_numOfPwrSource = inputSourceInfo["NumOfPwrSource"].toInt();
            emit numOfPwrSourceChanged(m_numOfPwrSource);
        }
    }

    if (pwrSourceParameters.contains("IsPresent")) {
        if (m_pwrSourceIsPresent != (pwrSourceParameters["IsPresent"].toString() != "NO")) {
            m_pwrSourceIsPresent = (pwrSourceParameters["IsPresent"].toString() != "NO");
            emit pwrSourceIsPresentChanged(m_pwrSourceIsPresent);
        }
    }

    if (pwrSourceParameters.contains("Name")) {
        if (m_pwrSourceName != pwrSourceParameters["Name"].toString()) {
            m_pwrSourceName = pwrSourceParameters["Name"].toString();
            emit pwrSourceNameChanged(m_pwrSourceName);
        }
    }

    if (pwrSourceParameters.contains("Status")) {
        if (m_pwrSourceStatus != pwrSourceParameters["Status"].toString()) {
            m_pwrSourceStatus = pwrSourceParameters["Status"].toString();
            emit pwrSourceStatusChanged(m_pwrSourceStatus);
        }
    }

    if (pwrSourceParameters.contains("InputLimit_I")) {
        if (m_pwrSourceInputLimit_I != pwrSourceParameters["InputLimit_I"].toInt()) {
            m_pwrSourceInputLimit_I = pwrSourceParameters["InputLimit_I"].toInt();
            emit pwrSourceInputLimit_IChanged(m_pwrSourceInputLimit_I);
        }
    }

    if (pwrSourceParameters.contains("DetectedLimit_I")) {
        if (m_pwrSourceDetectedLimit_I != pwrSourceParameters["DetectedLimit_I"].toInt()) {
            m_pwrSourceDetectedLimit_I = pwrSourceParameters["DetectedLimit_I"].toInt();
            emit pwrSourceDetectedLimit_IChanged(m_pwrSourceDetectedLimit_I);
        }
    }

    if (pwrSourceParameters.contains("RequestedLimit_I")) {
        if (m_pwrSourceRequestedLimit_I != pwrSourceParameters["RequestedLimit_I"].toInt()) {
            m_pwrSourceRequestedLimit_I = pwrSourceParameters["RequestedLimit_I"].toInt();
            emit pwrSourceRequestedLimit_IChanged(m_pwrSourceRequestedLimit_I);
        }
    }

    if (pwrSourceParameters.contains("ActualLimit_I")) {
        if (m_pwrSourceActualLimit_I != pwrSourceParameters["ActualLimit_I"].toInt()) {
            m_pwrSourceActualLimit_I = pwrSourceParameters["ActualLimit_I"].toInt();
            emit pwrSourceActualLimit_IChanged(m_pwrSourceActualLimit_I);
        }
    }




    // SystemInfo

    if (systemInfo.contains("SystemVoltage")) {
        if (m_systemVoltage != systemInfo["SystemVoltage"].toInt()) {
            m_systemVoltage = systemInfo["SystemVoltage"].toInt();
            emit systemVoltageChanged(m_systemVoltage);
        }
    }

    if (systemInfo.contains("InputCurrentMonitor")) {
        if (m_inputCurrentMonitor != systemInfo["InputCurrentMonitor"].toInt()) {
            m_inputCurrentMonitor = systemInfo["InputCurrentMonitor"].toInt();
            emit inputCurrentMonitorChanged(m_inputCurrentMonitor);
        }
    }

    if (systemInfo.contains("ChargingState")) {
        if (m_chargingState != systemInfo["ChargingState"].toString()) {
            m_chargingState = systemInfo["ChargingState"].toString();
            emit chargingStateChanged(m_chargingState);
        }
    }

    if (systemInfo.contains("MaxSystemVoltage")) {
        if (m_maxSystemVoltage != systemInfo["MaxSystemVoltage"].toInt()) {
            m_maxSystemVoltage = systemInfo["MaxSystemVoltage"].toInt();
            emit maxSystemVoltageChanged(m_maxSystemVoltage);
        }
    }

    if (systemInfo.contains("MinSystemVoltage")) {
        if (m_minSystemVoltage != systemInfo["MinSystemVoltage"].toInt()) {
            m_minSystemVoltage = systemInfo["MinSystemVoltage"].toInt();
            emit minSystemVoltageChanged(m_minSystemVoltage);
        }
    }

    if (systemInfo.contains("ChargeCurrent")) {
        if (m_chargeCurrent != systemInfo["ChargeCurrent"].toInt()) {
            m_chargeCurrent = systemInfo["ChargeCurrent"].toInt();
            emit chargeCurrentChanged(m_chargeCurrent);
        }
    }




    // Custom Property

    if (batteryStatus.contains("AverageCurrent")) {
        double oneMahConvertedInSecond = 1.0 / (60 * 60);
        int secsSinceLastPps = m_lastPpsDateTime.secsTo(QDateTime::currentDateTime());
        m_mAhConsumedNow = m_averageCurrent * (secsSinceLastPps * oneMahConvertedInSecond);
        emit mAhConsumedNowChanged(m_mAhConsumedNow);

        m_lastPpsDateTime = QDateTime::currentDateTime();
    }
}
