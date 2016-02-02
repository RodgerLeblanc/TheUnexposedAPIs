/*
 * Serializer.cpp
 *
 *  Created on: 23.02.2015
 *      Author: benjaminsliwa
 */

#include "Serializer.h"

Serializer::Serializer(QObject *_parent) : QObject(_parent), m_itemSeparator("::"), m_valueSeparator("$$")
{
    if (_parent)
        this->setParent(_parent);
}

Serializer::~Serializer()
{
}

QString Serializer::serialize(const QString &_type, const QString &_category, const QStringList &_keys, const QVariantList &_values)
{
    QHash<QString, QVariant> values;
    for(int i=0; i<_keys.size(); i++)
        values.insert(_keys.at(i), _values.at(i));

    return serialize(_type, _category, values);
}

QString Serializer::serialize(const QString &_type, const QString &_category, const QHash<QString, QVariant> &_values)
{
    QString data = "";

    QStringList keys = QStringList() << "EVENT_TYPE" << "EVENT_CATEGORY" << _values.keys();
    QVariantList values = QVariantList() << _type << _category << _values.values();

    int s = keys.size();
    for(int i=0; i<s; i++)
    {
        QVariant value = values.at(i);
        data += keys.at(i) + m_itemSeparator + value.toString() + m_itemSeparator + value.typeName();

        if(i<s-1)
            data += m_valueSeparator;
    }

    return data;
}

QHash<QString, QVariant> Serializer::deserialize(const QString &_data)
{
    QHash<QString, QVariant> data;
    QStringList values = _data.split(m_valueSeparator);
    for(int i=0; i<values.size(); i++)
    {
        QStringList items =  values.at(i).split(m_itemSeparator);
        if(items.size()==3)
        {
            QString key = items.at(0);
            QString value = items.at(1);
            QString type = items.at(2);

            data.insert(key, convertToVariant(value, type));
        }
    }

    return data;
}

bool Serializer::isValid(const QString &_data)
{
    bool valid = true;

    QStringList items = _data.split(m_valueSeparator);
    for(int i=0; i<items.size(); i++)
    {
        QStringList elements = items.at(i).split(m_itemSeparator);
        int s = elements.size();

        if(s!=3)
            valid = false;
    }
    return valid;
}


QVariant Serializer::convertToVariant(const QString &_value, const QString &_type)
{
    QVariant value;

    if(_type=="QString")
        value = QVariant(_value);
    else if(_type=="int")
        value = QVariant(_value.toInt());
    else if(_type=="uint")
        value = QVariant(_value.toInt());
    else if(_type=="double")
        value = QVariant(_value.toDouble());
    else if(_type=="bool")
        _value=="true" ? value=1 : value=0;

    return value;
}
