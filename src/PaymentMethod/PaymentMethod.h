/*
 * PaymentMethod.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef PAYMENTMETHOD_H_
#define PAYMENTMETHOD_H_

#include <src/PpsWatch/PpsWatch.h>

class PaymentMethod : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString currentPaymentMethod READ currentPaymentMethod NOTIFY currentPaymentMethodChanged);

public:
    PaymentMethod(QObject *_parent = 0);

    QString currentPaymentMethod() { return m_currentPaymentMethod; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString m_currentPaymentMethod;

    PpsWatch* m_paymentMethod;

signals:
    void currentPaymentMethodChanged(QString&);
};

#endif /* PAYMENTMETHOD_H_ */
