/*
 * ReconditionInfo.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/ReconditionInfo/ReconditionInfo.h>

ReconditionInfo::ReconditionInfo(QObject *_parent) :
    QObject(_parent),
    m_reconditionInfo(new PpsWatch("/pps/services/recondition_info", this))
{
    connect(m_reconditionInfo, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void ReconditionInfo::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("reconditionDate")) {
        if (m_isReconditioned != (map["reconditionDate"].toString() != "0")) {
            m_isReconditioned = (map["reconditionDate"].toString() != "0");
            emit isReconditionedChanged(m_isReconditioned);
        }
    }

    // This PPS will not change
    m_reconditionInfo->deleteLater();
}
