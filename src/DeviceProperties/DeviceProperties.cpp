/*
 * DeviceProperties.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/DeviceProperties/DeviceProperties.h>

DeviceProperties::DeviceProperties(QObject *_parent) :
    QObject(_parent),
    m_deviceProperties(new PpsWatch("/pps/services/deviceproperties", this))
{
    connect(m_deviceProperties, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void DeviceProperties::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("defaultTheme")) {
        if (m_defaultTheme != map["defaultTheme"].toString()) {
            m_defaultTheme = map["defaultTheme"].toString();
            emit defaultThemeChanged(m_defaultTheme);
        }
    }

    if (map.contains("du")) {
        if (m_du != map["du"].toInt()) {
            m_du = map["du"].toInt();
            emit duChanged(m_du);
        }
    }

    if (map.contains("modelname")) {
        if (m_modelName != map["modelname"].toString()) {
            m_modelName = map["modelname"].toString();
            emit modelNameChanged(m_modelName);
        }
    }

    if (map.contains("modelnumber")) {
        if (m_modelNumber != map["modelnumber"].toString()) {
            m_modelNumber = map["modelnumber"].toString();
            emit modelNumberChanged(m_modelNumber);
        }
    }

    if (map.contains("scmbundle")) {
        if (m_osVersion != map["scmbundle"].toString()) {
            m_osVersion = map["scmbundle"].toString();
            emit osVersionChanged(m_osVersion);
        }
    }

    if (map.contains("screen_dimensions")) {
        if (m_screenDimensions != map["screen_dimensions"].toString()) {
            m_screenDimensions = map["screen_dimensions"].toString();
            emit screenDimensionsChanged(m_screenDimensions);
        }
    }

    if (map.contains("screen_dpi")) {
        if (m_screenDpi != map["screen_dpi"].toString()) {
            m_screenDpi = map["screen_dpi"].toString();
            emit screenDpiChanged(m_screenDpi);
        }
    }

    if (map.contains("screen_res")) {
        if (m_screenResolution != map["screen_res"].toString()) {
            m_screenResolution = map["screen_res"].toString();
            emit screenResolutionChanged(m_screenResolution);
        }
    }

    // This PPS won't change
    m_deviceProperties->deleteLater();
}
