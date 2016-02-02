/*
 * CalendarUpcomingEvents.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef CALENDARUPCOMINGEVENTS_H_
#define CALENDARUPCOMINGEVENTS_H_

#include <src/PpsWatch/PpsWatch.h>

class CalendarUpcomingEvents : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QVariantList allNextEvents READ allNextEvents NOTIFY allNextEventsChanged);
    Q_PROPERTY(QVariantMap nextEvent READ nextEvent NOTIFY nextEventChanged);
    Q_PROPERTY(QString nextEventString READ nextEventString NOTIFY nextEventStringChanged);

public:
    CalendarUpcomingEvents(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QVariantList allNextEvents() { return m_allNextEvents; }
    QVariantMap nextEvent() { return m_nextEvent; }
    QString nextEventString() { return m_nextEventString; }

    QString getEventString(const QVariantMap& event);

    QVariantList m_allNextEvents;
    QVariantMap m_nextEvent;
    QString m_nextEventString;

    PpsWatch* m_calendarUpcomingEvents;

signals:
    void allNextEventsChanged(QVariantList&);
    void nextEventChanged(QVariantMap&);
    void nextEventStringChanged(QString&);
};

#endif /* CALENDARUPCOMINGEVENTS_H_ */
