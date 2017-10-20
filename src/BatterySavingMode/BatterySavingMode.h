/*
 * BatterySavingMode.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef BATTERYSAVINGMODE_H_
#define BATTERYSAVINGMODE_H_

#include <src/PpsWatch/PpsWatch.h>

class BatterySavingMode : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool active READ active NOTIFY activeChanged);
    Q_PROPERTY(bool limitCpuPerformance READ limitCpuPerformance NOTIFY limitCpuPerformanceChanged);
    Q_PROPERTY(int screenTimeout READ screenTimeout NOTIFY screenTimeoutChanged);
    Q_PROPERTY(QString triggerSource READ triggerSource NOTIFY triggerSourceChanged);
    Q_PROPERTY(bool turnOffAdvancedInteractionsOption READ turnOffAdvancedInteractionsOption NOTIFY turnOffAdvancedInteractionsOptionChanged);
    Q_PROPERTY(bool turnOffDataServicesOption READ turnOffDataServicesOption NOTIFY turnOffDataServicesOptionChanged);
    Q_PROPERTY(bool turnOffLocationServicesOption READ turnOffLocationServicesOption NOTIFY turnOffLocationServicesOptionChanged);
    Q_PROPERTY(bool turnOnBatterySavingModeAutomaticallyOption READ turnOnBatterySavingModeAutomaticallyOption NOTIFY turnOnBatterySavingModeAutomaticallyOptionChanged);
    Q_PROPERTY(int userThreshold READ userThreshold NOTIFY userThresholdChanged);

public:
    BatterySavingMode(QObject *_parent = 0);

    bool active() { return m_active; }
    bool limitCpuPerformance() { return m_limitCpuPerformance; }
    int screenTimeout() { return m_screenTimeout; }
    QString triggerSource() { return m_triggerSource; }
    bool turnOffAdvancedInteractionsOption() { return m_turnOffAdvancedInteractionsOption; }
    bool turnOffDataServicesOption() { return m_turnOffDataServicesOption; }
    bool turnOffLocationServicesOption() { return m_turnOffLocationServicesOption; }
    bool turnOnBatterySavingModeAutomaticallyOption() { return m_turnOnBatterySavingModeAutomaticallyOption; }
    int userThreshold() { return m_userThreshold; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_active;
    bool m_limitCpuPerformance;
    int m_screenTimeout;
    QString m_triggerSource;
    bool m_turnOffAdvancedInteractionsOption;
    bool m_turnOffDataServicesOption;
    bool m_turnOffLocationServicesOption;
    bool m_turnOnBatterySavingModeAutomaticallyOption;
    int m_userThreshold;

    PpsWatch* m_batterySavingMode;

signals:
    void activeChanged(bool&);
    void limitCpuPerformanceChanged(bool&);
    void screenTimeoutChanged(int&);
    void triggerSourceChanged(QString&);
    void turnOffAdvancedInteractionsOptionChanged(bool&);
    void turnOffDataServicesOptionChanged(bool&);
    void turnOffLocationServicesOptionChanged(bool&);
    void turnOnBatterySavingModeAutomaticallyOptionChanged(bool&);
    void userThresholdChanged(int&);
};

#endif /* BATTERYSAVINGMODE_H_ */
