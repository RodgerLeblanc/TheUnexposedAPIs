/*
 * BatteryManager.h
 *
 *  Created on: 2016-01-30
 *      Author: Roger
 */

#ifndef BATTERYMANAGER_H_
#define BATTERYMANAGER_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QDateTime>
#include <QObject>

class BatteryManager : public QObject
{
    Q_OBJECT

    // BatteryInfo
    Q_PROPERTY(int activeBattery READ activeBattery NOTIFY activeBatteryChanged);
    Q_PROPERTY(int availableEnergy READ availableEnergy NOTIFY availableEnergyChanged);
    Q_PROPERTY(int averageCurrent READ averageCurrent NOTIFY averageCurrentChanged);
    Q_PROPERTY(int averagePower READ averagePower NOTIFY averagePowerChanged);
    Q_PROPERTY(bool batteryAlert READ batteryAlert NOTIFY batteryAlertChanged);
    Q_PROPERTY(int batteryId READ batteryId NOTIFY batteryIdChanged);
    Q_PROPERTY(QString batteryName READ batteryName NOTIFY batteryNameChanged);
    Q_PROPERTY(bool batteryPresent READ batteryPresent NOTIFY batteryPresentChanged);
    Q_PROPERTY(QString batteryState READ batteryState NOTIFY batteryStateChanged);
    Q_PROPERTY(int batteryVoltage READ batteryVoltage NOTIFY batteryVoltageChanged);
    Q_PROPERTY(int cycleCount READ cycleCount NOTIFY cycleCountChanged);
    Q_PROPERTY(int designCapacity READ designCapacity NOTIFY designCapacityChanged);
    Q_PROPERTY(int fullAvailableCap READ fullAvailableCap NOTIFY fullAvailableCapChanged);
    Q_PROPERTY(int fullChargeCap READ fullChargeCap NOTIFY fullChargeCapChanged);
    Q_PROPERTY(int maxLoadCurrent READ maxLoadCurrent NOTIFY maxLoadCurrentChanged);
    Q_PROPERTY(int maxLoadTimeToEmpty READ maxLoadTimeToEmpty NOTIFY maxLoadTimeToEmptyChanged);
    Q_PROPERTY(int nominalAvailableCap READ nominalAvailableCap NOTIFY nominalAvailableCapChanged);
    Q_PROPERTY(int numOfBattery READ numOfBattery NOTIFY numOfBatteryChanged);
    Q_PROPERTY(QString stateOfBattery READ stateOfBattery NOTIFY stateOfBatteryChanged);
    Q_PROPERTY(int stateOfCharge READ stateOfCharge NOTIFY stateOfChargeChanged);
    Q_PROPERTY(int stateOfHealth READ stateOfHealth NOTIFY stateOfHealthChanged);
    Q_PROPERTY(int temperature READ temperature NOTIFY temperatureChanged);
    Q_PROPERTY(int timeToEmpty READ timeToEmpty NOTIFY timeToEmptyChanged);
    Q_PROPERTY(int timeToEmptyAtConstPwr READ timeToEmptyAtConstPwr NOTIFY timeToEmptyAtConstPwrChanged);
    Q_PROPERTY(int timeToFull READ timeToFull NOTIFY timeToFullChanged);

    // ChargerInfo
    Q_PROPERTY(int activeCharger READ activeCharger NOTIFY activeChargerChanged);
    Q_PROPERTY(QString chargerName READ chargerName NOTIFY chargerNameChanged);
    Q_PROPERTY(QString chargerState READ chargerState NOTIFY chargerStateChanged);
    Q_PROPERTY(QString chargerStatus READ chargerStatus NOTIFY chargerStatusChanged);
    Q_PROPERTY(int maxChargeCurrent READ maxChargeCurrent NOTIFY maxChargeCurrentChanged);
    Q_PROPERTY(int maxInputCurrent READ maxInputCurrent NOTIFY maxInputCurrentChanged);
    Q_PROPERTY(int numOfSource READ numOfSource NOTIFY numOfSourceChanged);

    // InputSourceInfo
    Q_PROPERTY(int pwrSourceActualLimit_I READ pwrSourceActualLimit_I NOTIFY pwrSourceActualLimit_IChanged);
    Q_PROPERTY(int pwrSourceDetectedLimit_I READ pwrSourceDetectedLimit_I NOTIFY pwrSourceDetectedLimit_IChanged);
    Q_PROPERTY(int pwrSourceInputLimit_I READ pwrSourceInputLimit_I NOTIFY pwrSourceInputLimit_IChanged);
    Q_PROPERTY(int pwrSourceRequestedLimit_I READ pwrSourceRequestedLimit_I NOTIFY pwrSourceRequestedLimit_IChanged);
    Q_PROPERTY(bool pwrSourceIsPresent READ pwrSourceIsPresent NOTIFY pwrSourceIsPresentChanged);
    Q_PROPERTY(QString pwrSourceName READ pwrSourceName NOTIFY pwrSourceNameChanged);
    Q_PROPERTY(QString pwrSourceStatus READ pwrSourceStatus NOTIFY pwrSourceStatusChanged);
    Q_PROPERTY(int numOfPwrSource READ numOfPwrSource NOTIFY numOfPwrSourceChanged);

    // SystemInfo
    Q_PROPERTY(int chargeCurrent READ chargeCurrent NOTIFY chargeCurrentChanged);
    Q_PROPERTY(QString chargingState READ chargingState NOTIFY chargingStateChanged);
    Q_PROPERTY(int inputCurrentMonitor READ inputCurrentMonitor NOTIFY inputCurrentMonitorChanged);
    Q_PROPERTY(int maxSystemVoltage READ maxSystemVoltage NOTIFY maxSystemVoltageChanged);
    Q_PROPERTY(int minSystemVoltage READ minSystemVoltage NOTIFY minSystemVoltageChanged);
    Q_PROPERTY(QString systemState READ systemState NOTIFY systemStateChanged);
    Q_PROPERTY(int systemVoltage READ systemVoltage NOTIFY systemVoltageChanged);

    // Custom Property
    Q_PROPERTY(double mAhConsumedNow READ mAhConsumedNow NOTIFY mAhConsumedNowChanged);

public:
    BatteryManager(QObject *_parent = 0);

    // BatteryInfo
    int activeBattery() { return m_activeBattery; }
    int availableEnergy() { return m_availableEnergy; }
    int averageCurrent() { return m_averageCurrent; }
    int averagePower() { return m_averagePower; }
    bool batteryAlert() { return m_batteryAlert; }
    int batteryId() { return m_batteryId; }
    QString batteryName() { return m_batteryName; }
    bool batteryPresent() { return m_batteryPresent; }
    QString batteryState() { return m_batteryState; }
    int batteryVoltage() { return m_batteryVoltage; }
    int cycleCount() { return m_cycleCount; }
    int designCapacity() { return m_designCapacity; }
    int fullAvailableCap() { return m_fullAvailableCap; }
    int fullChargeCap() { return m_fullChargeCap; }
    int maxLoadCurrent() { return m_maxLoadCurrent; }
    int maxLoadTimeToEmpty() { return m_maxLoadTimeToEmpty; }
    int nominalAvailableCap() { return m_nominalAvailableCap; }
    int numOfBattery() { return m_numOfBattery; }
    QString stateOfBattery() { return m_stateOfBattery; }
    int stateOfCharge() { return m_stateOfCharge; }
    int stateOfHealth() { return m_stateOfHealth; }
    int temperature() { return m_temperature; }
    int timeToEmpty() { return m_timeToEmpty; }
    int timeToEmptyAtConstPwr() { return m_timeToEmptyAtConstPwr; }
    int timeToFull() { return m_timeToFull; }

    // InputSourceInfo
    int activeCharger() { return m_activeCharger; }
    QString chargerName() { return m_chargerName; }
    QString chargerState() { return m_chargerState; }
    QString chargerStatus() { return m_chargerStatus; }
    int maxChargeCurrent() { return m_maxChargeCurrent; }
    int maxInputCurrent() { return m_maxInputCurrent; }
    int numOfSource() { return m_numOfSource; }

    // InputSourceInfo
    int pwrSourceActualLimit_I() { return m_pwrSourceActualLimit_I; }
    int pwrSourceDetectedLimit_I() { return m_pwrSourceDetectedLimit_I; }
    int pwrSourceInputLimit_I() { return m_pwrSourceInputLimit_I; }
    int pwrSourceRequestedLimit_I() { return m_pwrSourceRequestedLimit_I; }
    bool pwrSourceIsPresent() { return m_pwrSourceIsPresent; }
    QString pwrSourceName() { return m_pwrSourceName; }
    QString pwrSourceStatus() { return m_pwrSourceStatus; }
    int numOfPwrSource() { return m_numOfPwrSource; }

    // SystemInfo
    int chargeCurrent() { return m_chargeCurrent; }
    QString chargingState() { return m_chargingState; }
    int inputCurrentMonitor() { return m_inputCurrentMonitor; }
    int maxSystemVoltage() { return m_maxSystemVoltage; }
    int minSystemVoltage() { return m_minSystemVoltage; }
    QString systemState() { return m_systemState; }
    int systemVoltage() { return m_systemVoltage; }

    // Custom Property
    double mAhConsumedNow() { return m_mAhConsumedNow; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    // BatteryInfo
    int m_activeBattery;
    int m_availableEnergy;
    int m_averageCurrent;
    int m_averagePower;
    bool m_batteryAlert;
    int m_batteryId;
    QString m_batteryName;
    bool m_batteryPresent;
    QString m_batteryState;
    int m_batteryVoltage;
    int m_cycleCount;
    int m_designCapacity;
    int m_fullAvailableCap;
    int m_fullChargeCap;
    int m_maxLoadCurrent;
    int m_maxLoadTimeToEmpty;
    int m_nominalAvailableCap;
    int m_numOfBattery;
    QString m_stateOfBattery;
    int m_stateOfCharge;
    int m_stateOfHealth;
    int m_temperature;
    int m_timeToEmpty;
    int m_timeToEmptyAtConstPwr;
    int m_timeToFull;

    // InputSourceInfo
    int m_activeCharger;
    QString m_chargerName;
    QString m_chargerState;
    QString m_chargerStatus;
    int m_maxChargeCurrent;
    int m_maxInputCurrent;
    int m_numOfSource;

    // InputSourceInfo
    int m_pwrSourceActualLimit_I;
    int m_pwrSourceDetectedLimit_I;
    int m_pwrSourceInputLimit_I;
    int m_pwrSourceRequestedLimit_I;
    bool m_pwrSourceIsPresent;
    QString m_pwrSourceName;
    QString m_pwrSourceStatus;
    int m_numOfPwrSource;

    // SystemInfo
    int m_chargeCurrent;
    QString m_chargingState;
    int m_inputCurrentMonitor;
    int m_maxSystemVoltage;
    int m_minSystemVoltage;
    QString m_systemState;
    int m_systemVoltage;

    // Custom Property
    double m_mAhConsumedNow;
    QDateTime m_lastPpsDateTime;

    PpsWatch* m_batteryManager;

signals:
    // BatteryInfo
    void activeBatteryChanged(int&);
    void availableEnergyChanged(int&);
    void averageCurrentChanged(int&);
    void averagePowerChanged(int&);
    void batteryAlertChanged(bool&);
    void batteryIdChanged(int&);
    void batteryNameChanged(QString&);
    void batteryPresentChanged(bool&);
    void batteryStateChanged(QString&);
    void batteryVoltageChanged(int&);
    void cycleCountChanged(int&);
    void designCapacityChanged(int&);
    void fullAvailableCapChanged(int&);
    void fullChargeCapChanged(int&);
    void maxLoadCurrentChanged(int&);
    void maxLoadTimeToEmptyChanged(int&);
    void nominalAvailableCapChanged(int&);
    void numOfBatteryChanged(int&);
    void stateOfBatteryChanged(QString&);
    void stateOfChargeChanged(int&);
    void stateOfHealthChanged(int&);
    void temperatureChanged(int&);
    void timeToEmptyChanged(int&);
    void timeToEmptyAtConstPwrChanged(int&);
    void timeToFullChanged(int&);

    // InputSourceInfo
    void activeChargerChanged(int&);
    void chargerNameChanged(QString&);
    void chargerStateChanged(QString&);
    void chargerStatusChanged(QString&);
    void maxChargeCurrentChanged(int&);
    void maxInputCurrentChanged(int&);
    void numOfSourceChanged(int&);

    // InputSourceInfo
    void pwrSourceActualLimit_IChanged(int&);
    void pwrSourceDetectedLimit_IChanged(int&);
    void pwrSourceInputLimit_IChanged(int&);
    void pwrSourceRequestedLimit_IChanged(int&);
    void pwrSourceIsPresentChanged(bool&);
    void pwrSourceNameChanged(QString&);
    void pwrSourceStatusChanged(QString&);
    void numOfPwrSourceChanged(int&);

    // SystemInfo
    void chargeCurrentChanged(int&);
    void chargingStateChanged(QString&);
    void inputCurrentMonitorChanged(int&);
    void maxSystemVoltageChanged(int&);
    void minSystemVoltageChanged(int&);
    void systemStateChanged(QString&);
    void systemVoltageChanged(int&);

    // Custom Property
    void mAhConsumedNowChanged(double&);
};

#endif /* BATTERYMANAGER_H_ */
