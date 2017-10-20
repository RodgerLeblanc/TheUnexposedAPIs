/*
 * PhoneActive.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef PHONEACTIVE_H_
#define PHONEACTIVE_H_

#include <src/PpsWatch/PpsWatch.h>

class PhoneActive : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int areaCode READ areaCode NOTIFY areaCodeChanged);
    Q_PROPERTY(int countryCode READ countryCode NOTIFY countryCodeChanged);
    Q_PROPERTY(bool phoneActive READ phoneActive NOTIFY phoneActiveChanged);
    Q_PROPERTY(QString phoneState READ phoneState NOTIFY phoneStateChanged);

public:
    PhoneActive(QObject *_parent = 0);

    int areaCode() { return m_areaCode; }
    int countryCode() { return m_countryCode; }
    bool phoneActive() { return m_phoneActive; }
    QString phoneState() { return m_phoneState; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    int m_areaCode;
    int m_countryCode;
    bool m_phoneActive;
    QString m_phoneState;

    PpsWatch* m_phoneActivePps;

signals:
    void areaCodeChanged(int&);
    void countryCodeChanged(int&);
    void phoneActiveChanged(bool&);
    void phoneStateChanged(QString&);
};

#endif /* PHONEACTIVE_H_ */
