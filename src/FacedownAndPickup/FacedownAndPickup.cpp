/*
 * FacedownAndPickup.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/FacedownAndPickup/FacedownAndPickup.h>

FacedownAndPickup::FacedownAndPickup(QObject *_parent) :
    QObject(_parent),
    m_facedownAndPickup(new PpsWatch("/pps/services/sensor/pickup/.all", this)),
    m_inHandPps(new PpsWatch("/pps/services/sensor/hub_gestures", this))
{
    connect(m_facedownAndPickup, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
    connect(m_inHandPps, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void FacedownAndPickup::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("facedown_enabled")) {
        if (m_facedownEnabled != map["facedown_enabled"].toBool()) {
            m_facedownEnabled = map["facedown_enabled"].toBool();
            emit facedownEnabledChanged(m_facedownEnabled);
        }
    }

    if (map.contains("pickup_enabled")) {
        if (m_pickupEnabled != map["pickup_enabled"].toBool()) {
            m_pickupEnabled = map["pickup_enabled"].toBool();
            emit pickupEnabledChanged(m_pickupEnabled);
        }
    }

    if (map.contains("awake_from_facedown")) {
        if (m_awakeFromFacedown != map["awake_from_facedown"].toInt()) {
            m_awakeFromFacedown = map["awake_from_facedown"].toInt();
            emit awakeFromFacedownChanged(m_awakeFromFacedown);
        }
    }

    if (map.contains("awake_from_facedown_today")) {
        if (m_awakeFromFacedownToday != map["awake_from_facedown_today"].toInt()) {
            m_awakeFromFacedownToday = map["awake_from_facedown_today"].toInt();
            emit awakeFromFacedownTodayChanged(m_awakeFromFacedownToday);
        }
    }

    if (map.contains("awake_from_pickup")) {
        if (m_awakeFromPickup != map["awake_from_pickup"].toInt()) {
            m_awakeFromPickup = map["awake_from_pickup"].toInt();
            emit awakeFromPickupChanged(m_awakeFromPickup);
        }
    }

    if (map.contains("awake_from_pickup_today")) {
        if (m_awakeFromPickupToday != map["awake_from_pickup_today"].toInt()) {
            m_awakeFromPickupToday = map["awake_from_pickup_today"].toInt();
            emit awakeFromPickupTodayChanged(m_awakeFromPickupToday);
        }
    }

    if (map.contains("screen_time_saved")) {
        if (m_screenTimeSaved != map["screen_time_saved"].toInt()) {
            m_screenTimeSaved = map["screen_time_saved"].toInt();
            emit screenTimeSavedChanged(m_screenTimeSaved);
        }
    }

    if (map.contains("screen_time_saved_today")) {
        if (m_screenTimeSavedToday != map["screen_time_saved_today"].toInt()) {
            m_screenTimeSavedToday = map["screen_time_saved_today"].toInt();
            emit screenTimeSavedTodayChanged(m_screenTimeSavedToday);
        }
    }

    if (map.contains("standby_by_facedown")) {
        if (m_standbyByFacedown != map["standby_by_facedown"].toInt()) {
            m_standbyByFacedown = map["standby_by_facedown"].toInt();
            emit standbyByFacedownChanged(m_standbyByFacedown);
        }
    }

    if (map.contains("standby_by_facedown_today")) {
        if (m_standbyByFacedownToday != map["standby_by_facedown_today"].toInt()) {
            m_standbyByFacedownToday = map["standby_by_facedown_today"].toInt();
            emit standbyByFacedownTodayChanged(m_standbyByFacedownToday);
        }
    }

    if (map.contains("in_hand")) {
        if (m_inHand != (map["in_hand"].toInt() != 2)) {
            m_inHand = (map["in_hand"].toInt() != 2);
            emit inHandChanged(m_inHand);
        }
    }
}
