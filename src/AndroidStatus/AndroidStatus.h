/*
 * AndroidStatus.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef ANDROIDSTATUS_H_
#define ANDROIDSTATUS_H_

#include <src/PpsWatch/PpsWatch.h>

class AndroidStatus : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool fullscreen READ fullscreen NOTIFY fullscreenChanged);
    Q_PROPERTY(bool keyboardShown READ keyboardShown NOTIFY keyboardShownChanged);
    Q_PROPERTY(int keyboardSize READ keyboardSize NOTIFY keyboardSizeChanged);
    Q_PROPERTY(QString state READ state NOTIFY stateChanged);

public:
    AndroidStatus(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool fullscreen() { return m_fullscreen; }
    bool keyboardShown() { return m_keyboardShown; }
    int keyboardSize() { return m_keyboardSize; }
    QString state() { return m_state; }

    bool m_fullscreen;
    bool m_keyboardShown;
    int m_keyboardSize;
    QString m_state;

    PpsWatch* m_androidStatus;

signals:
    void fullscreenChanged(bool&);
    void keyboardShownChanged(bool&);
    void keyboardSizeChanged(int&);
    void stateChanged(QString&);
};

#endif /* ANDROIDSTATUS_H_ */
