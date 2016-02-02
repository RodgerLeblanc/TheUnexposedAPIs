/*
 * DebugToken.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef DEBUGTOKEN_H_
#define DEBUGTOKEN_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QDateTime>

class DebugToken : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString author READ author NOTIFY authorChanged);
    Q_PROPERTY(bool devModeEnabled READ devModeEnabled NOTIFY devModeEnabledChanged);
    Q_PROPERTY(QString devModeExpiration READ devModeExpiration NOTIFY devModeExpirationChanged);
    Q_PROPERTY(bool devModeWaiting READ devModeWaiting NOTIFY devModeWaitingChanged);
    Q_PROPERTY(QDateTime expiration READ expiration NOTIFY expirationChanged);
    Q_PROPERTY(bool installed READ installed NOTIFY installedChanged);
    Q_PROPERTY(QString timeout READ timeout NOTIFY timeoutChanged);
    Q_PROPERTY(bool valid READ valid NOTIFY validChanged);
    Q_PROPERTY(QString validationError READ validationError NOTIFY validationErrorChanged);
    Q_PROPERTY(int validationErrorCode READ validationErrorCode  NOTIFY validationErrorCodeChanged);

public:
    DebugToken(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString author() { return m_author; }
    bool devModeEnabled() { return m_devModeEnabled; }
    QString devModeExpiration() { return m_devModeExpiration; }
    bool devModeWaiting() { return m_devModeWaiting; }
    QDateTime expiration() { return m_expiration; }
    bool installed() { return m_installed; }
    QString timeout() { return m_timeout; }
    bool valid() { return m_valid; }
    QString validationError() { return m_validationError; }
    int validationErrorCode() { return m_validationErrorCode; }

    QString m_author;
    bool m_devModeEnabled;
    QString m_devModeExpiration;
    bool m_devModeWaiting;
    QDateTime m_expiration;
    bool m_installed;
    QString m_timeout;
    bool m_valid;
    QString m_validationError;
    int m_validationErrorCode;

    PpsWatch* m_debugToken;

signals:
    void authorChanged(QString&);
    void devModeEnabledChanged(bool&);
    void devModeExpirationChanged(QString&);
    void devModeWaitingChanged(bool&);
    void expirationChanged(QDateTime&);
    void installedChanged(bool&);
    void timeoutChanged(QString&);
    void validChanged(bool&);
    void validationErrorChanged(QString&);
    void validationErrorCodeChanged(int&);
};

#endif /* DEBUGTOKEN_H_ */
