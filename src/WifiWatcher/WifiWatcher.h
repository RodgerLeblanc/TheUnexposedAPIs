/*
 * WifiWatcher.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef WIFIWATCHER_H_
#define WIFIWATCHER_H_

#include <src/PpsWatch/PpsWatch.h>

class WifiWatcher : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool lanTetherPowerEnabled READ lanTetherPowerEnabled NOTIFY lanTetherPowerEnabledChanged);
    Q_PROPERTY(QString lanTetherState READ lanTetherState NOTIFY lanTetherStateChanged);
    Q_PROPERTY(QVariantList scanResults READ scanResults NOTIFY scanResultsChanged);
    Q_PROPERTY(bool connected READ connected NOTIFY connectedChanged);
    Q_PROPERTY(QString connectionState READ connectionState NOTIFY connectionStateChanged);
    Q_PROPERTY(QString connectionSsid READ connectionSsid NOTIFY connectionSsidChanged);
    Q_PROPERTY(QString connectionBssid READ connectionBssid NOTIFY connectionBssidChanged);

public:
    WifiWatcher(QObject *_parent = 0);

    bool lanTetherPowerEnabled() { return m_lanTetherPowerEnabled; }
    QString lanTetherState() { return m_lanTetherState; }
    QVariantList scanResults() { return m_scanResults; }
    bool connected() { return m_connected; }
    QString connectionState() { return m_connectionState; }
    QString connectionSsid() { return m_connectionSsid; }
    QString connectionBssid() { return m_connectionBssid; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_lanTetherPowerEnabled;
    QString m_lanTetherState;
    QVariantList m_scanResults;
    bool m_connected;
    QString m_connectionState;
    QString m_connectionSsid;
    QString m_connectionBssid;

    PpsWatch* m_wifiWatcher;

signals:
    void lanTetherPowerEnabledChanged(bool&);
    void lanTetherStateChanged(QString&);
    void scanResultsChanged(QVariantList&);
    void connectedChanged(bool&);
    void connectionStateChanged(QString&);
    void connectionSsidChanged(QString&);
    void connectionBssidChanged(QString&);
};

#endif /* WIFIWATCHER_H_ */
