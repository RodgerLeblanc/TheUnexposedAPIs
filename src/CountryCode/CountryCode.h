/*
 * CountryCode.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef COUNTRYCODE_H_
#define COUNTRYCODE_H_

#include <src/PpsWatch/PpsWatch.h>

class CountryCode : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString countryCode READ countryCode NOTIFY countryCodeChanged);

public:
    CountryCode(QObject *_parent = 0);

    QString countryCode() { return m_countryCode; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString m_countryCode;

    PpsWatch* m_countryCodePps;

signals:
    void countryCodeChanged(QString&);
};

#endif /* COUNTRYCODE_H_ */
