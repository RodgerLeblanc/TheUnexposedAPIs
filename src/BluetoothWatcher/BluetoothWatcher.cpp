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
        // 8: disconnected, 24: connected
        const bool connected = (map["activity_state"].toInt() == 24);
        const QString deviceAddress = map["_ppsMapTitle"].toString().remove("@");
        const bool deviceWasAlreadyConnected = m_connectedDevices.contains(deviceAddress);

        if (connected != deviceWasAlreadyConnected) {
            if (connected) {
                m_connectedDevices.append(deviceAddress);
                emit bluetoothDeviceConnected(deviceAddress);
            }
            else {
                m_connectedDevices.removeAll(deviceAddress);
                emit bluetoothDeviceDisconnected(deviceAddress);
            }
            emit connectedDevicesChanged(m_connectedDevices);
        }
    }
}

