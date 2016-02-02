/*
 * PaymentMethod.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/PaymentMethod/PaymentMethod.h>

PaymentMethod::PaymentMethod(QObject *_parent) :
    QObject(_parent),
    m_paymentMethod(new PpsWatch("/pps/services/paymentsystem/status_public", this))
{
    connect(m_paymentMethod, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void PaymentMethod::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("current_payment_method")) {
        if (m_currentPaymentMethod != map["current_payment_method"].toString()) {
            m_currentPaymentMethod = map["current_payment_method"].toString();
            emit currentPaymentMethodChanged(m_currentPaymentMethod);
        }
    }
}
