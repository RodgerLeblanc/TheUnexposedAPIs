/*
 * Talk2WatchApi.h
 *
 *  Created on: 2015-10-07
 *      Author: Roger
 */

#ifndef TALK2WATCHAPI_H
#define TALK2WATCHAPI_H

#include "src/Pebble/Serializer.h"

#include <QObject>
#include <QStringList>
#include <QVariantList>
#include <QtNetwork/QUdpSocket>

class Talk2WatchApi : public QObject
{
    Q_OBJECT
public:
    Talk2WatchApi(QObject *_parent = 0);

    Q_INVOKABLE void sendBbmMessage(const QString &_text, const QString &_sender);
    Q_INVOKABLE void sendEmail(const QString &_text, const QString &_subject, const QString &_sender);
    Q_INVOKABLE void sendFacebookMessage(const QString &_text, const QString &_sender);
    Q_INVOKABLE void sendStandardNotification(const QString &_text, const QString &_sender);
    Q_INVOKABLE void sendSms(const QString &_text, const QString &_sender);
    Q_INVOKABLE void sendTwitterMessage(const QString &_text, const QString &_sender);
    Q_INVOKABLE void sendWhatsAppMessage(const QString &_text, const QString &_sender);

private:
    void sendEvent(const QString &_type, const QString &_category, const QStringList &_keys, const QVariantList &_values);

    Serializer* m_serializer;
    QUdpSocket m_udp;
};

#endif // TALK2WATCHAPI_H
