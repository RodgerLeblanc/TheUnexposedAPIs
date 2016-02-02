/*
 * CalendarUpcomingEvents.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/CalendarUpcomingEvents/CalendarUpcomingEvents.h>

#include <QDateTime>

/*
 * Needs access_pimdomain_calendars permission
 */

CalendarUpcomingEvents::CalendarUpcomingEvents(QObject *_parent) :
    QObject(_parent),
    m_calendarUpcomingEvents(new PpsWatch("/pps/services/pim/calendar_upcoming_events", this))
{
    connect(m_calendarUpcomingEvents, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void CalendarUpcomingEvents::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("all")) {
        const QVariantList all = map["all"].toList();
        if (m_allNextEvents.size() != all.size()) {
            m_allNextEvents = all;
            emit allNextEventsChanged(m_allNextEvents);
        }
        else {
            bool isDifferent = false;
            for (int i = 0; i < all.size(); i++) {
                // Check if all events are the same
                const QVariantMap newMap = all[i].toMap();
                const QVariantMap oldMap = m_allNextEvents[i].toMap();
                isDifferent = isDifferent || (getEventString(newMap) != getEventString(oldMap));
                if (isDifferent) {
                    m_allNextEvents = all;
                    emit allNextEventsChanged(m_allNextEvents);
                    return;
                }
            }
        }
    }

    if (map.contains("next")) {
        const QVariantList nextList = map["next"].toList();
        if (!nextList.isEmpty()) {
            const QVariantMap nextEvent = nextList.first().toMap();
            bool isDifferent = (getEventString(m_nextEvent) != getEventString(nextEvent));
            if (isDifferent) {
                m_nextEvent = nextEvent;
                emit nextEventChanged(m_nextEvent);

                QDateTime startTime = QDateTime::fromTime_t(m_nextEvent["start_time"].toInt());
                m_nextEventString = startTime.toString("h:mm") + " " + m_nextEvent["subject"].toString();
                emit nextEventStringChanged(m_nextEventString);
            }
        }
        else {
            if (!m_nextEvent.isEmpty()) {
                m_nextEvent = QVariantMap();
                emit nextEventChanged(m_nextEvent);

                m_nextEventString = "No upcoming events";
                emit nextEventStringChanged(m_nextEventString);
            }
        }
    }
}

QString CalendarUpcomingEvents::getEventString(const QVariantMap& event) {
    return (event["id"].toString() + event["subject"].toString() + event["start_time"].toString() + event["end_time"].toString());
}
