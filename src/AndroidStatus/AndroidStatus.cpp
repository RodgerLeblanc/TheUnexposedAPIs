/*
 * AndroidStatus.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/AndroidStatus/AndroidStatus.h>

AndroidStatus::AndroidStatus(QObject *_parent) :
    QObject(_parent),
    m_androidStatus(new PpsWatch("/pps/services/android/status", this))
{
    connect(m_androidStatus, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void AndroidStatus::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("fullscreen")) {
        if (m_fullscreen != map["fullscreen"].toBool()) {
            m_fullscreen = map["fullscreen"].toBool();
            emit fullscreenChanged(m_fullscreen);
        }
    }

    if (map.contains("keyboardShown")) {
        if (m_keyboardShown != map["keyboardShown"].toBool()) {
            m_keyboardShown = map["keyboardShown"].toBool();
            emit keyboardShownChanged(m_keyboardShown);
        }
    }

    if (map.contains("keyboardSize")) {
        if (m_keyboardSize != map["keyboardSize"].toInt()) {
            m_keyboardSize = map["keyboardSize"].toInt();
            emit keyboardSizeChanged(m_keyboardSize);
        }
    }

    if (map.contains("state")) {
        if (m_state != map["state"].toString()) {
            m_state = map["state"].toString();
            emit stateChanged(m_state);
        }
    }
}
