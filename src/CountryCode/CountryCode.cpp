/*
 * CountryCode.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/CountryCode/CountryCode.h>

CountryCode::CountryCode(QObject *_parent) :
    QObject(_parent),
    m_countryCodePps(new PpsWatch("/pps/services/geolocation/country/status", this))
{
    connect(m_countryCodePps, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void CountryCode::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("countryCode")) {
        if (m_countryCode != map["countryCode"].toString()) {
            m_countryCode = map["countryCode"].toString();
            emit countryCodeChanged(m_countryCode);
        }
    }
}
