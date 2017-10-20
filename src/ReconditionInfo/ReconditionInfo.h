/*
 * ReconditionInfo.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef RECONDITIONINFO_H_
#define RECONDITIONINFO_H_

#include <src/PpsWatch/PpsWatch.h>

class ReconditionInfo : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isReconditioned READ isReconditioned NOTIFY isReconditionedChanged);

public:
    ReconditionInfo(QObject *_parent = 0);

    bool isReconditioned() { return m_isReconditioned; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_isReconditioned;

    PpsWatch* m_reconditionInfo;

signals:
    void isReconditionedChanged(bool&);
};

#endif /* RECONDITIONINFO_H_ */
