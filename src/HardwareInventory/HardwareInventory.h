/*
 * HardwareInventory.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef HARDWAREINVENTORY_H_
#define HARDWAREINVENTORY_H_

#include <src/PpsWatch/PpsWatch.h>

class HardwareInventory : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString boardRev READ boardRev NOTIFY boardRevChanged);
    Q_PROPERTY(QString boardType READ boardType NOTIFY boardTypeChanged);
    Q_PROPERTY(QString cameraFrontId READ cameraFrontId NOTIFY cameraFrontIdChanged);
    Q_PROPERTY(QString cameraFrontVendor READ cameraFrontVendor NOTIFY cameraFrontVendorChanged);
    Q_PROPERTY(QString cameraRearExtraInfo READ cameraRearExtraInfo NOTIFY cameraRearExtraInfoChanged);
    Q_PROPERTY(QString cameraRearId READ cameraRearId NOTIFY cameraRearIdChanged);
    Q_PROPERTY(QString cameraRearVendor READ cameraRearVendor NOTIFY cameraRearVendorChanged);
    Q_PROPERTY(QString cpuType READ cpuType NOTIFY cpuTypeChanged);
    Q_PROPERTY(QString hdmi READ hdmi NOTIFY hdmiChanged);
    Q_PROPERTY(QString emmcDiskSize READ emmcDiskSize NOTIFY emmcDiskSizeChanged);
    Q_PROPERTY(QString emmcManufacturingDate READ emmcManufacturingDate NOTIFY emmcManufacturingDateChanged);
    Q_PROPERTY(QString emmcProductName READ emmcProductName NOTIFY emmcProductNameChanged);
    Q_PROPERTY(QString emmcVendor READ emmcVendor NOTIFY emmcVendorChanged);
    Q_PROPERTY(QString keyboard READ keyboard NOTIFY keyboardChanged);
    Q_PROPERTY(QString keyboardType READ keyboardType NOTIFY keyboardTypeChanged);
    Q_PROPERTY(bool miracastSupported READ miracastSupported NOTIFY miracastSupportedChanged);
    Q_PROPERTY(QString processorCpuName READ processorCpuName NOTIFY processorCpuNameChanged);
    Q_PROPERTY(QString processorCpuSpeed READ processorCpuSpeed NOTIFY processorCpuSpeedChanged);
    Q_PROPERTY(QString processorName READ processorName NOTIFY processorNameChanged);
    Q_PROPERTY(int processorNumbers READ processorNumbers NOTIFY processorNumbersChanged);
    Q_PROPERTY(QString ramSize READ ramSize NOTIFY ramSizeChanged);
    Q_PROPERTY(QString sdramSize READ sdramSize NOTIFY sdramSizeChanged);
    Q_PROPERTY(QString sdramVendor READ sdramVendor NOTIFY sdramVendorChanged);

public:
    HardwareInventory(QObject *_parent = 0);

    QString boardRev() { return m_boardRev; }
    QString boardType() { return m_boardType; }
    QString cameraFrontId() { return m_cameraFrontId; }
    QString cameraFrontVendor() { return m_cameraFrontVendor; }
    QString cameraRearExtraInfo() { return m_cameraRearExtraInfo; }
    QString cameraRearId() { return m_cameraRearId; }
    QString cameraRearVendor() { return m_cameraRearVendor; }
    QString cpuType() { return m_cpuType; }
    QString emmcDiskSize() { return m_emmcDiskSize; }
    QString emmcManufacturingDate() { return m_emmcManufacturingDate; }
    QString emmcProductName() { return m_emmcProductName; }
    QString emmcVendor() { return m_emmcVendor; }
    QString hdmi() { return m_hdmi; }
    QString keyboard() { return m_keyboard; }
    QString keyboardType() { return m_keyboardType; }
    bool miracastSupported() { return m_miracastSupported; }
    QString processorCpuName() { return m_processorCpuName; }
    QString processorCpuSpeed() { return m_processorCpuSpeed; }
    QString processorName() { return m_processorName; }
    int processorNumbers() { return m_processorNumbers; }
    QString ramSize() { return m_ramSize; }
    QString sdramSize() { return m_sdramSize; }
    QString sdramVendor() { return m_sdramVendor; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString m_boardRev;
    QString m_boardType;
    QString m_cameraFrontId;
    QString m_cameraFrontVendor;
    QString m_cameraRearExtraInfo;
    QString m_cameraRearId;
    QString m_cameraRearVendor;
    QString m_cpuType;
    QString m_emmcDiskSize;
    QString m_emmcManufacturingDate;
    QString m_emmcProductName;
    QString m_emmcVendor;
    QString m_hdmi;
    QString m_keyboard;
    QString m_keyboardType;
    bool m_miracastSupported;
    QString m_processorCpuName;
    QString m_processorCpuSpeed;
    QString m_processorName;
    int m_processorNumbers;
    QString m_ramSize;
    QString m_sdramSize;
    QString m_sdramVendor;

    PpsWatch* m_hardwareInventory;

signals:
    void boardRevChanged(QString&);
    void boardTypeChanged(QString&);
    void cameraFrontIdChanged(QString&);
    void cameraFrontVendorChanged(QString&);
    void cameraRearExtraInfoChanged(QString&);
    void cameraRearIdChanged(QString&);
    void cameraRearVendorChanged(QString&);
    void cpuTypeChanged(QString&);
    void emmcDiskSizeChanged(QString&);
    void emmcManufacturingDateChanged(QString&);
    void emmcProductNameChanged(QString&);
    void emmcVendorChanged(QString&);
    void hdmiChanged(QString&);
    void keyboardChanged(QString&);
    void keyboardTypeChanged(QString&);
    void miracastSupportedChanged(bool&);
    void processorCpuNameChanged(QString&);
    void processorCpuSpeedChanged(QString&);
    void processorNameChanged(QString&);
    void processorNumbersChanged(int &);
    void ramSizeChanged(QString&);
    void sdramSizeChanged(QString&);
    void sdramVendorChanged(QString&);
};

#endif /* HARDWAREINVENTORY_H_ */
