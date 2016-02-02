/*
 * DataRoaming.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/DataRoaming/DataRoaming.h>

DataRoaming::DataRoaming(QObject *_parent) :
    QObject(_parent),
    m_dataRoaming(new PpsWatch("/pps/services/cds/cnice/status_persistent", this))
{
    connect(m_dataRoaming, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void DataRoaming::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("data_roaming_mode")) {
        if (m_dataRoamingMode != map["data_roaming_mode"].toString()) {
            m_dataRoamingMode = map["data_roaming_mode"].toString();
            emit dataRoamingModeChanged(m_dataRoamingMode);
        }
    }

    if (map.contains("data_roaming_mode_level")) {
        if (m_dataRoamingModeLevel != map["data_roaming_mode_level"].toString()) {
            m_dataRoamingModeLevel = map["data_roaming_mode_level"].toString();
            emit dataRoamingModeLevelChanged(m_dataRoamingModeLevel);
        }
    }

    if (map.contains("data_service_mode")) {
        if (m_dataServiceMode != map["data_service_mode"].toBool()) {
            m_dataServiceMode = map["data_service_mode"].toBool();
            emit dataServiceModeChanged(m_dataServiceMode);
        }
    }
}
