/*
 * ProgressStatus.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/ProgressStatus/ProgressStatus.h>

ProgressStatus::ProgressStatus(QObject *_parent) :
    QObject(_parent),
    m_progressStatus(new PpsWatch("/pps/services/progress/status", this))
{
    connect(m_progressStatus, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void ProgressStatus::onPpsFileReady(const QVariantMap& map) {
    QMapIterator<QString, QVariant> i(map);
    while (i.hasNext()) {
        i.next();
        if (!i.key().contains("-")) {
            const QVariantMap thisProgress = i.value().toMap();
            if (thisProgress.isEmpty())
                return;

            int current = thisProgress["cur"].toInt();
            int end = thisProgress["end"].toInt();
            QString units = thisProgress["units"].toString();
            QString app = thisProgress["app"].toString();
            QString item = thisProgress["item"].toString();
            QString error = thisProgress["error"].toString();
            QString op = thisProgress["op"].toString();

            if (m_currentValue != current) {
                m_currentValue = current;
                emit currentValueChanged(m_currentValue);
            }

            if (m_endValue != end) {
                m_endValue = end;
                emit endValueChanged(m_endValue);
            }

            if (m_units != units) {
                m_units = units;
                emit unitsChanged(m_units);
            }

            if (m_app != app) {
                m_app = app;
                emit appChanged(m_app);
            }

            if (m_item != item) {
                m_item = item;
                emit itemChanged(m_item);
            }

            if (m_error != error) {
                m_error = error;
                emit errorChanged(m_error);
            }

            if (m_operation != op) {
                m_operation = op;
                emit operationChanged(m_operation);
            }
        }
    }
}
