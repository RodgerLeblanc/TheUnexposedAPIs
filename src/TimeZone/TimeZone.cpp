/*
 * TimeZone.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/TimeZone/TimeZone.h>

TimeZone::TimeZone(QObject *_parent) :
    QObject(_parent),
    m_timeZone(new PpsWatch("/pps/services/network-time/status", this))
{
    connect(m_timeZone, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void TimeZone::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("auto_time")) {
        if (m_setTimeAutomatically != map["auto_time"].toBool()) {
            m_setTimeAutomatically = map["auto_time"].toBool();
            emit setTimeAutomaticallyChanged(m_setTimeAutomatically);
        }
    }

    if (map.contains("auto_zone")) {
        if (m_autoUpdateTimeZone != map["auto_zone"].toBool()) {
            m_autoUpdateTimeZone = map["auto_zone"].toBool();
            emit autoUpdateTimeZoneChanged(m_autoUpdateTimeZone);
        }
    }

    if (map.contains("last_zone_detected")) {
        const QVariantMap last_zone_detected = map["last_zone_detected"].toMap();
        if (last_zone_detected.contains("zone")) {
            if (m_lastZoneDetected != last_zone_detected["zone"].toString()) {
                m_lastZoneDetected = last_zone_detected["zone"].toString();
                emit lastZoneDetectedChanged(m_lastZoneDetected);
            }
        }
    }
}
