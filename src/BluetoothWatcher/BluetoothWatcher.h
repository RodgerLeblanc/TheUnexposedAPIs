/*
 * BluetoothWatcher.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef BLUETOOTHWATCHER_H_
#define BLUETOOTHWATCHER_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QStringList>

class BluetoothWatcher : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QStringList connectedDevices READ connectedDevices NOTIFY connectedDevicesChanged);

public:
    BluetoothWatcher(QObject *_parent = 0);

    QStringList connectedDevices() { return m_connectedDevices; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QStringList m_connectedDevices;

    PpsWatch* m_bluetoothWatcher;

signals:
    void bluetoothDeviceConnected(QString);
    void bluetoothDeviceDisconnected(QString);
    void connectedDevicesChanged(QStringList&);
};

#endif /* BLUETOOTHWATCHER_H_ */
