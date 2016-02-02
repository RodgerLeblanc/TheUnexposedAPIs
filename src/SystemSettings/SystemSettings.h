/*
 * SystemSettings.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef SYSTEMSETTINGS_H_
#define SYSTEMSETTINGS_H_

#include <src/PpsWatch/PpsWatch.h>

class SystemSettings : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool allowAlternateAppSource READ allowAlternateAppSource NOTIFY allowAlternateAppSourceChanged);
    Q_PROPERTY(bool autoHideActionBar READ autoHideActionBar NOTIFY autoHideActionBarChanged);
    Q_PROPERTY(bool bypassScreenlock READ bypassScreenlock NOTIFY bypassScreenlockChanged);
    Q_PROPERTY(bool checkAppsForMalware READ checkAppsForMalware NOTIFY checkAppsForMalwareChanged);
    Q_PROPERTY(int hourFormat READ hourFormat NOTIFY hourFormatChanged);
    Q_PROPERTY(QString langCountryCode READ langCountryCode NOTIFY langCountryCodeChanged);
    Q_PROPERTY(int lockScreenTimeout READ lockScreenTimeout NOTIFY lockScreenTimeoutChanged);
    Q_PROPERTY(QString messageOnLockscreenLine1 READ messageOnLockscreenLine1 NOTIFY messageOnLockscreenLine1Changed);
    Q_PROPERTY(QString messageOnLockscreenLine2 READ messageOnLockscreenLine2 NOTIFY messageOnLockscreenLine2Changed);
    Q_PROPERTY(bool showActionBarLabels READ showActionBarLabels NOTIFY showActionBarLabelsChanged);
    Q_PROPERTY(bool swipeToWakeup READ swipeToWakeup NOTIFY swipeToWakeupChanged);
    Q_PROPERTY(QString tzDatabaseId READ tzDatabaseId NOTIFY tzDatabaseIdChanged);

public:
    SystemSettings(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool allowAlternateAppSource() { return m_allowAlternateAppSource; }
    bool autoHideActionBar() { return m_autoHideActionBar; }
    bool bypassScreenlock() { return m_bypassScreenlock; }
    bool checkAppsForMalware() { return m_checkAppsForMalware; }
    int hourFormat() { return m_hourFormat; }
    QString langCountryCode() { return m_langCountryCode; }
    int lockScreenTimeout() { return m_lockScreenTimeout; }
    QString messageOnLockscreenLine1() { return m_messageOnLockscreenLine1; }
    QString messageOnLockscreenLine2() { return m_messageOnLockscreenLine2; }
    bool showActionBarLabels() { return m_showActionBarLabels; }
    bool swipeToWakeup() { return m_swipeToWakeup; }
    QString tzDatabaseId() { return m_tzDatabaseId; }

    bool m_allowAlternateAppSource;
    bool m_autoHideActionBar;
    bool m_bypassScreenlock;
    bool m_checkAppsForMalware;
    int m_hourFormat;
    QString m_langCountryCode;
    int m_lockScreenTimeout;
    QString m_messageOnLockscreenLine1;
    QString m_messageOnLockscreenLine2;
    bool m_showActionBarLabels;
    bool m_swipeToWakeup;
    QString m_tzDatabaseId;

    PpsWatch* m_systemSettings;

signals:
    void allowAlternateAppSourceChanged(bool&);
    void autoHideActionBarChanged(bool&);
    void bypassScreenlockChanged(bool&);
    void checkAppsForMalwareChanged(bool&);
    void hourFormatChanged(int&);
    void langCountryCodeChanged(QString&);
    void lockScreenTimeoutChanged(int&);
    void messageOnLockscreenLine1Changed(QString&);
    void messageOnLockscreenLine2Changed(QString&);
    void showActionBarLabelsChanged(bool&);
    void swipeToWakeupChanged(bool&);
    void tzDatabaseIdChanged(QString&);
};

#endif /* SYSTEMSETTINGS_H_ */
