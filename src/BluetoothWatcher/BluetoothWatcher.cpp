/*
 * BluetoothWatcher.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/BluetoothWatcher/BluetoothWatcher.h>

BluetoothWatcher::BluetoothWatcher(QObject *_parent) :
    QObject(_parent),
    m_bluetoothWatcher(new PpsWatch("/pps/services/bluetooth/remote_devices/.all", this))
{
    connect(m_bluetoothWatcher, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void BluetoothWatcher::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("activity_state")) {
        const bool connected = (map["activity_state"].toInt() == 16);
        const QString deviceName = map["_ppsMapTitle"].toString();
        const bool deviceWasAlreadyConnected = m_connectedDevices.contains(deviceName);

        if (connected != deviceWasAlreadyConnected) {
            if (connected) {
                m_connectedDevices.append(deviceName);
                emit bluetoothDeviceConnected(deviceName);
            }
            else {
                m_connectedDevices.removeAll(deviceName);
                emit bluetoothDeviceDisconnected(deviceName);
            }
            emit connectedDevicesChanged(m_connectedDevices);
        }
    }
}

