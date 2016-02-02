/*
 * FullscreenPid.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/FullscreenPid/FullscreenPid.h>

FullscreenPid::FullscreenPid(QObject *_parent) :
    QObject(_parent),
    m_fullscreenPidPps(new PpsWatch("/pps/services/navigator/state", this))
{
    connect(m_fullscreenPidPps, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void FullscreenPid::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("curr_window")) {
        if (m_doNotTrustThisValueCurrWindow != map["curr_window"].toString()) {
            m_doNotTrustThisValueCurrWindow = map["curr_window"].toString();
            emit doNotTrustThisValueCurrWindowChanged(m_doNotTrustThisValueCurrWindow);
        }
    }

    if (map.contains("fullscreen")) {
        if (m_fullscreenPid != map["fullscreen"].toInt()) {
            m_fullscreenPid = map["fullscreen"].toInt();
            emit fullscreenPidChanged(m_fullscreenPid);

            const bool isOnHomescreen = (m_fullscreenPid == 0);
            if (m_isOnHomescreen != isOnHomescreen) {
                m_isOnHomescreen = isOnHomescreen;
                emit isOnHomescreenChanged(m_isOnHomescreen);
            }
        }
    }
}
