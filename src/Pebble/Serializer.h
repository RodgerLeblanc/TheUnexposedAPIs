/*
 * Serializer.h
 *
 *  Created on: 23.02.2015
 *      Author: benjaminsliwa
 */

#ifndef SERIALIZER_H_
#define SERIALIZER_H_

#include <QObject>
#include <QHash>
#include <QStringList>
#include <QVariantList>

class Serializer : public QObject
{
    Q_OBJECT
public:
    Serializer(QObject *_parent = 0);
    virtual ~Serializer();

    QString serialize(const QString &_type, const QString &_category, const QStringList &_keys, const QVariantList &_values);
    QString serialize(const QString &_type, const QString &_category, const QHash<QString, QVariant> &_values);
    QHash<QString, QVariant> deserialize(const QString &_data);

    bool isValid(const QString &_data);

    QVariant convertToVariant(const QString &_value, const QString &_type);

private:
    QString m_itemSeparator;
    QString m_valueSeparator;
};

#endif /* SERIALIZER_H_ */
