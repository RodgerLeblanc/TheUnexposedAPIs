/*
 * RadioManager.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef RADIOMANAGER_H_
#define RADIOMANAGER_H_

#include <src/PpsWatch/PpsWatch.h>

class RadioManager : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool airplaneModeEnabled READ airplaneModeEnabled NOTIFY airplaneModeEnabledChanged);
    Q_PROPERTY(bool bedsideModeEnabled READ bedsideModeEnabled NOTIFY bedsideModeEnabledChanged);
    Q_PROPERTY(bool bluetoothEnabled READ bluetoothEnabled NOTIFY bluetoothEnabledChanged);
    Q_PROPERTY(bool cellularEnabled READ cellularEnabled NOTIFY cellularEnabledChanged);
    Q_PROPERTY(bool dataServiceModeEnabled READ dataServiceModeEnabled NOTIFY dataServiceModeEnabledChanged);
    Q_PROPERTY(bool ecmModeEnabled READ ecmModeEnabled NOTIFY ecmModeEnabledChanged);
    Q_PROPERTY(bool gpsEnabled READ gpsEnabled NOTIFY gpsEnabledChanged);
    Q_PROPERTY(bool nfcEnabled READ nfcEnabled NOTIFY nfcEnabledChanged);
    Q_PROPERTY(bool wifiEnabled READ wifiEnabled NOTIFY wifiEnabledChanged);

public:
    RadioManager(QObject *_parent = 0);

    bool airplaneModeEnabled() { return m_airplaneModeEnabled; }
    bool bedsideModeEnabled() { return m_bedsideModeEnabled; }
    bool bluetoothEnabled() { return m_bluetoothEnabled; }
    bool cellularEnabled() { return m_cellularEnabled; }
    bool dataServiceModeEnabled() { return m_dataServiceModeEnabled; }
    bool ecmModeEnabled() { return m_ecmModeEnabled; }
    bool gpsEnabled() { return m_gpsEnabled; }
    bool nfcEnabled() { return m_nfcEnabled; }
    bool wifiEnabled() { return m_wifiEnabled; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_airplaneModeEnabled;
    bool m_bedsideModeEnabled;
    bool m_bluetoothEnabled;
    bool m_cellularEnabled;
    bool m_dataServiceModeEnabled;
    bool m_ecmModeEnabled;
    bool m_gpsEnabled;
    bool m_nfcEnabled;
    bool m_wifiEnabled;

    PpsWatch* m_radioManager1;
    PpsWatch* m_radioManager2;

signals:
    void airplaneModeEnabledChanged(bool&);
    void bedsideModeEnabledChanged(bool&);
    void bluetoothEnabledChanged(bool&);
    void cellularEnabledChanged(bool&);
    void dataServiceModeEnabledChanged(bool&);
    void ecmModeEnabledChanged(bool&);
    void gpsEnabledChanged(bool&);
    void nfcEnabledChanged(bool&);
    void wifiEnabledChanged(bool&);
};

#endif /* RADIOMANAGER_H_ */
