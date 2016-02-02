/*
 * DeviceProperties.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef DEVICEPROPERTIES_H_
#define DEVICEPROPERTIES_H_

#include <src/PpsWatch/PpsWatch.h>

class DeviceProperties : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString defaultTheme READ defaultTheme NOTIFY defaultThemeChanged);
    Q_PROPERTY(int du READ du NOTIFY duChanged);
    Q_PROPERTY(QString modelName READ modelName NOTIFY modelNameChanged);
    Q_PROPERTY(QString modelNumber READ modelNumber NOTIFY modelNumberChanged);
    Q_PROPERTY(QString osVersion READ osVersion NOTIFY osVersionChanged);
    Q_PROPERTY(QString screenDimensions READ screenDimensions NOTIFY screenDimensionsChanged);
    Q_PROPERTY(QString screenDpi READ screenDpi NOTIFY screenDpiChanged);
    Q_PROPERTY(QString screenResolution READ screenResolution NOTIFY screenResolutionChanged);

public:
    DeviceProperties(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString defaultTheme() { return m_defaultTheme; }
    int du() { return m_du; }
    QString modelName() { return m_modelName; }
    QString modelNumber() { return m_modelNumber; }
    QString osVersion() { return m_osVersion; }
    QString screenDimensions() { return m_screenDimensions; }
    QString screenDpi() { return m_screenDpi; }
    QString screenResolution() { return m_screenResolution; }

    QString m_defaultTheme;
    int m_du;
    QString m_modelName;
    QString m_modelNumber;
    QString m_osVersion;
    QString m_screenDimensions;
    QString m_screenDpi;
    QString m_screenResolution;

    PpsWatch* m_deviceProperties;

signals:
    void defaultThemeChanged(QString&);
    void duChanged(int&);
    void modelNameChanged(QString&);
    void modelNumberChanged(QString&);
    void osVersionChanged(QString&);
    void screenDimensionsChanged(QString&);
    void screenDpiChanged(QString&);
    void screenResolutionChanged(QString&);
};

#endif /* DEVICEPROPERTIES_H_ */
