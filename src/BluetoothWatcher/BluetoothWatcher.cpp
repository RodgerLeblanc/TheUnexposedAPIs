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
        bool connected = (map["activity_state"].toInt() == 16);
        bool deviceWasAlreadyConnected = m_connectedDevices.contains(map["_ppsMapTitle"].toString());

        if (connected != deviceWasAlreadyConnected) {
            if (connected) {
                m_connectedDevices.append(map["_ppsMapTitle"].toString().remove("@"));
                emit bluetoothDeviceConnected(map["_ppsMapTitle"].toString());
            }
            else {
                m_connectedDevices.removeAll(map["_ppsMapTitle"].toString().remove("@"));
                emit bluetoothDeviceDisconnected(map["_ppsMapTitle"].toString());
            }
            emit connectedDevicesChanged(m_connectedDevices);
        }
    }
}

