/*
 * ProgressStatus.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef PROGRESSSTATUS_H_
#define PROGRESSSTATUS_H_

#include <src/PpsWatch/PpsWatch.h>

class ProgressStatus : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString app READ app NOTIFY appChanged);
    Q_PROPERTY(int currentValue READ currentValue NOTIFY currentValueChanged);
    Q_PROPERTY(int endValue READ endValue NOTIFY endValueChanged);
    Q_PROPERTY(QString error READ error NOTIFY errorChanged);
    Q_PROPERTY(QString item READ item NOTIFY itemChanged);
    Q_PROPERTY(QString operation READ operation NOTIFY operationChanged);
    Q_PROPERTY(QString units READ units NOTIFY unitsChanged);

public:
    ProgressStatus(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString app() { return m_app; }
    int endValue() { return m_endValue; }
    QString error() { return m_error; }
    QString item() { return m_item; }
    QString operation() { return m_operation; }
    int currentValue() { return m_currentValue; }
    QString units() { return m_units; }

    QString m_app;
    int m_currentValue;
    int m_endValue;
    QString m_error;
    QString m_item;
    QString m_operation;
    QString m_units;

    PpsWatch* m_progressStatus;

signals:
    void appChanged(QString&);
    void currentValueChanged(int&);
    void endValueChanged(int&);
    void errorChanged(QString&);
    void itemChanged(QString&);
    void operationChanged(QString&);
    void unitsChanged(QString&);
};

#endif /* PROGRESSSTATUS_H_ */
