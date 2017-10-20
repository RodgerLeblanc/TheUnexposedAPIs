/*
 * Talk2WatchApi.cpp
 *
 *  Created on: 2015-10-07
 *      Author: Roger
 */

/*
 *
 * Thanks to Benjamin Sliwa for this great API.
 *
 * If your app isn't headless, you'll need to add this to your pro file:
 * QT += network
 *
 * If your app is headless, you'll need to add this to your pro file:
 * QT += declarative network sql
 *
 *
 */


#include <src/Pebble/Talk2WatchApi.h>

#include <QDebug>

Talk2WatchApi::Talk2WatchApi(QObject *_parent) : QObject(_parent)
{
    if (_parent)
        this->setParent(_parent);

    m_serializer = new Serializer(this);
}

void Talk2WatchApi::sendBbmMessage(const QString &_text, const QString &_sender)
{
    sendEvent("BBM", "NOTIFICATIONS", QStringList() << "text" << "sender" << "id" << "force", QVariantList() << _text << _sender << "" << 1);
}

void Talk2WatchApi::sendEmail(const QString &_text, const QString &_subject, const QString &_sender)
{
    sendEvent("EMAIL", "NOTIFICATIONS", QStringList() << "text" << "subject" << "sender"  << "id" << "force", QVariantList() << _text << _subject << _sender << "" << 1);
}

void Talk2WatchApi::sendEvent(const QString &_type, const QString &_category, const QStringList &_keys, const QVariantList &_values)
{
    QStringList keys = QStringList() << "EVENT_TYPE" << "EVENT_CATEGORY" << _keys;
    QVariantList values = QVariantList() << _type << _category << _values;

    QString command = "";
    for(int i=0; i<keys.size(); i++)
    {
        QVariant value = values.at(i);
        command += keys.at(i) + "::" + value.toString() + "::" + value.typeName();
        if(i<keys.size()-1)
            command += "$$";
    }

    m_udp.writeDatagram(command.toUtf8(), QHostAddress("127.0.0.1"), 9877);
}

void Talk2WatchApi::sendFacebookMessage(const QString &_text, const QString &_sender)
{
    sendEvent("FACEBOOK", "NOTIFICATIONS", QStringList() << "text" << "sender" << "id" << "force", QVariantList() << _text << _sender << "" << 1);
}

void Talk2WatchApi::sendSms(const QString &_text, const QString &_sender)
{
    sendEvent("SMS", "NOTIFICATIONS", QStringList() << "text" << "sender" << "id" << "force", QVariantList() << _text << _sender << "" << 1);
}

void Talk2WatchApi::sendStandardNotification(const QString &_text, const QString &_sender)
{
    // A standard notification is sent as a SMS
    this->sendSms(_text, _sender);
}

void Talk2WatchApi::sendTwitterMessage(const QString &_text, const QString &_sender)
{
    sendEvent("TWITTER", "NOTIFICATIONS", QStringList() << "text" << "sender" << "id" << "force", QVariantList() << _text << _sender << "" << 1);
}

void Talk2WatchApi::sendWhatsAppMessage(const QString &_text, const QString &_sender)
{
    sendEvent("WHATSAPP", "NOTIFICATIONS", QStringList() << "text" << "sender" << "id" << "force", QVariantList() << _text << _sender << "" << 1);
}
