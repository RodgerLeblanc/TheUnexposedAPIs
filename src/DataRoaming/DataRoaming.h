/*
 * DataRoaming.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef DATAROAMING_H_
#define DATAROAMING_H_

#include <src/PpsWatch/PpsWatch.h>

class DataRoaming : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString dataRoamingMode READ dataRoamingMode NOTIFY dataRoamingModeChanged);
    Q_PROPERTY(QString dataRoamingModeLevel READ dataRoamingModeLevel NOTIFY dataRoamingModeLevelChanged);
    Q_PROPERTY(bool dataServiceMode READ dataServiceMode NOTIFY dataServiceModeChanged);

public:
    DataRoaming(QObject *_parent = 0);

    QString dataRoamingMode() { return m_dataRoamingMode; }
    QString dataRoamingModeLevel() { return m_dataRoamingModeLevel; }
    bool dataServiceMode() { return m_dataServiceMode; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString m_dataRoamingMode;
    QString m_dataRoamingModeLevel;
    bool m_dataServiceMode;

    PpsWatch* m_dataRoaming;

signals:
    void dataRoamingModeChanged(QString&);
    void dataRoamingModeLevelChanged(QString&);
    void dataServiceModeChanged(bool&);
};

#endif /* DATAROAMING_H_ */
