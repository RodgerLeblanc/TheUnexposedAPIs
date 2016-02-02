/*
 * PpsWatch.h
 *
 *  Created on: 2015-06-05
 *      Author: Roger
 */

#ifndef PPSWATCH_H_
#define PPSWATCH_H_

#include <QObject>
#include <bb/PpsObject>

class PpsWatch : public QObject
{
    Q_OBJECT

public:
    PpsWatch(const QString& path, QObject *_parent = 0);
    virtual ~PpsWatch();

    void changePath(const QString& path);

private slots:
    void onPpsReadyRead();

private:
    bb::PpsObject* m_ppsObject;

    QString m_path;
    QString m_mapTitle;

signals:
    void logMessage(const QString&);
    void ppsFileReady(const QVariantMap&);
};

#endif /* PPSWATCH_H_ */
