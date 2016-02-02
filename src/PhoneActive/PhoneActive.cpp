/*
 * PhoneActive.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/PhoneActive/PhoneActive.h>

PhoneActive::PhoneActive(QObject *_parent) :
    QObject(_parent),
    m_phoneActivePps(new PpsWatch("/pps/services/phone/public/status", this))
{
    connect(m_phoneActivePps, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void PhoneActive::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("area_code")) {
        if (m_areaCode != map["area_code"].toInt()) {
            m_areaCode = map["area_code"].toInt();
            emit areaCodeChanged(m_areaCode);
        }
    }

    if (map.contains("country_code")) {
        if (m_countryCode != map["country_code"].toInt()) {
            m_countryCode = map["country_code"].toInt();
            emit countryCodeChanged(m_countryCode);
        }
    }

    if (map.contains("phone_active")) {
        if (m_phoneActive != map["phone_active"].toBool()) {
            m_phoneActive = map["phone_active"].toBool();
            emit phoneActiveChanged(m_phoneActive);
        }
    }

    if (map.contains("phone_state")) {
        if (m_phoneState != map["phone_state"].toString()) {
            m_phoneState = map["phone_state"].toString();
            emit phoneStateChanged(m_phoneState);
        }
    }
}
