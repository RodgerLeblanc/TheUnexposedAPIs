/*
 * FontSettings.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/FontSettings/FontSettings.h>

FontSettings::FontSettings(QObject *_parent) :
    QObject(_parent),
    m_fontSettings(new PpsWatch("/pps/services/font/settings", this))
{
    connect(m_fontSettings, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void FontSettings::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("font_size")) {
        if (m_fontSize != map["font_size"].toInt()) {
            m_fontSize = map["font_size"].toInt();
            emit fontSizeChanged(m_fontSize);
        }
    }
}
