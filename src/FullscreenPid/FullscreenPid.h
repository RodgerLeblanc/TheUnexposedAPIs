/*
 * FullscreenPid.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef FULLSCREENPID_H_
#define FULLSCREENPID_H_

#include <src/PpsWatch/PpsWatch.h>

class FullscreenPid : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString doNotTrustThisValueCurrWindow READ doNotTrustThisValueCurrWindow NOTIFY doNotTrustThisValueCurrWindowChanged);
    Q_PROPERTY(int fullscreenPid READ fullscreenPid NOTIFY fullscreenPidChanged);
    Q_PROPERTY(bool isOnHomescreen READ isOnHomescreen NOTIFY isOnHomescreenChanged);

public:
    FullscreenPid(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString doNotTrustThisValueCurrWindow() { return m_doNotTrustThisValueCurrWindow; }
    int fullscreenPid() { return m_fullscreenPid; }
    bool isOnHomescreen() { return m_isOnHomescreen; }

    QString m_doNotTrustThisValueCurrWindow;
    int m_fullscreenPid;
    bool m_isOnHomescreen;

    PpsWatch* m_fullscreenPidPps;

signals:
    void doNotTrustThisValueCurrWindowChanged(QString&);
    void fullscreenPidChanged(int&);
    void isOnHomescreenChanged(bool&);
};

#endif /* FULLSCREENPID_H_ */
