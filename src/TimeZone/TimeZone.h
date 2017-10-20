/*
 * TimeZone.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef TIMEZONE_H_
#define TIMEZONE_H_

#include <src/PpsWatch/PpsWatch.h>

class TimeZone : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool autoUpdateTimeZone READ autoUpdateTimeZone NOTIFY autoUpdateTimeZoneChanged);
    Q_PROPERTY(QString lastZoneDetected READ lastZoneDetected NOTIFY lastZoneDetectedChanged);
    Q_PROPERTY(bool setTimeAutomatically READ setTimeAutomatically NOTIFY setTimeAutomaticallyChanged);

public:
    TimeZone(QObject *_parent = 0);

    bool autoUpdateTimeZone() { return m_autoUpdateTimeZone; }
    QString lastZoneDetected() { return m_lastZoneDetected; }
    bool setTimeAutomatically() { return m_setTimeAutomatically; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_autoUpdateTimeZone;
    QString m_lastZoneDetected;
    bool m_setTimeAutomatically;

    PpsWatch* m_timeZone;

signals:
    void autoUpdateTimeZoneChanged(bool&);
    void lastZoneDetectedChanged(QString&);
    void setTimeAutomaticallyChanged(bool&);
};

#endif /* TIMEZONE_H_ */
