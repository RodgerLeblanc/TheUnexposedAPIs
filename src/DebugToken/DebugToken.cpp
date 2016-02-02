/*
 * DebugToken.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/DebugToken/DebugToken.h>

DebugToken::DebugToken(QObject *_parent) :
    QObject(_parent),
    m_debugToken(new PpsWatch("/pps/system/development/devmode", this))
{
    connect(m_debugToken, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void DebugToken::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("debug_token_author")) {
        if (m_author != map["debug_token_author"].toString()) {
            m_author = map["debug_token_author"].toString();
            emit authorChanged(m_author);
        }
    }

    if (map.contains("debug_token_expiration")) {
        if (m_expiration != map["debug_token_expiration"].toDateTime()) {
            m_expiration = map["debug_token_expiration"].toDateTime();
            emit expirationChanged(m_expiration);
        }
    }

    if (map.contains("debug_token_installed")) {
        if (m_installed != map["debug_token_installed"].toBool()) {
            m_installed = map["debug_token_installed"].toBool();
            emit installedChanged(m_installed);
        }
    }

    if (map.contains("debug_token_timeout")) {
        if (m_timeout != map["debug_token_timeout"].toString()) {
            m_timeout = map["debug_token_timeout"].toString();
            emit timeoutChanged(m_timeout);
        }
    }

    if (map.contains("debug_token_valid")) {
        if (m_valid != map["debug_token_valid"].toBool()) {
            m_valid = map["debug_token_valid"].toBool();
            emit validChanged(m_valid);
        }
    }

    if (map.contains("debug_token_validation_error")) {
        if (m_validationError != map["debug_token_validation_error"].toString()) {
            m_validationError = map["debug_token_validation_error"].toString();
            emit validationErrorChanged(m_validationError);
        }
    }

    if (map.contains("debug_token_validation_error_code")) {
        if (m_validationErrorCode != map["debug_token_validation_error_code"].toInt()) {
            m_validationErrorCode = map["debug_token_validation_error_code"].toInt();
            emit validationErrorCodeChanged(m_validationErrorCode);
        }
    }

    if (map.contains("dev_mode_enabled")) {
        if (m_devModeEnabled != map["dev_mode_enabled"].toBool()) {
            m_devModeEnabled = map["dev_mode_enabled"].toBool();
            emit devModeEnabledChanged(m_devModeEnabled);
        }
    }

    if (map.contains("dev_mode_expiration")) {
        if (m_devModeExpiration!= map["dev_mode_expiration"].toString()) {
            m_devModeExpiration = map["dev_mode_expiration"].toString();
            emit devModeExpirationChanged(m_devModeExpiration);
        }
    }

    if (map.contains("dev_mode_waiting")) {
        if (m_devModeWaiting != map["dev_mode_waiting"].toBool()) {
            m_devModeWaiting = map["dev_mode_waiting"].toBool();
            emit devModeWaitingChanged(m_devModeWaiting);
        }
    }
}
