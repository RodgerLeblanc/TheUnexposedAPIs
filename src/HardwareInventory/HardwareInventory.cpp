/*
 * HardwareInventory.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/HardwareInventory/HardwareInventory.h>

HardwareInventory::HardwareInventory(QObject *_parent) :
    QObject(_parent),
    m_hardwareInventory(new PpsWatch("/pps/services/hw_info/inventory", this))
{
    connect(m_hardwareInventory, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void HardwareInventory::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("Board_Rev")) {
        if (m_boardRev != map["Board_Rev"].toString()) {
            m_boardRev = map["Board_Rev"].toString();
            emit boardRevChanged(m_boardRev);
        }
    }

    if (map.contains("Board_Type")) {
        if (m_boardType != map["Board_Type"].toString()) {
            m_boardType = map["Board_Type"].toString();
            emit boardTypeChanged(m_boardType);
        }
    }

    if (map.contains("CAMERA_FRONT_ID")) {
        if (m_cameraFrontId != map["CAMERA_FRONT_ID"].toString()) {
            m_cameraFrontId = map["CAMERA_FRONT_ID"].toString();
            emit cameraFrontIdChanged(m_cameraFrontId);
        }
    }

    if (map.contains("CAMERA_FRONT_VENDOR")) {
        if (m_cameraFrontVendor != map["CAMERA_FRONT_VENDOR"].toString()) {
            m_cameraFrontVendor = map["CAMERA_FRONT_VENDOR"].toString();
            emit cameraFrontVendorChanged(m_cameraFrontVendor);
        }
    }

    if (map.contains("CAMERA_REAR_EXTRA_info")) {
        if (m_cameraRearExtraInfo != map["CAMERA_REAR_EXTRA_info"].toString()) {
            m_cameraRearExtraInfo = map["CAMERA_REAR_EXTRA_info"].toString();
            emit cameraRearExtraInfoChanged(m_cameraRearExtraInfo);
        }
    }

    if (map.contains("CAMERA_REAR_ID")) {
        if (m_cameraRearId != map["CAMERA_REAR_ID"].toString()) {
            m_cameraRearId = map["CAMERA_REAR_ID"].toString();
            emit cameraRearIdChanged(m_cameraRearId);
        }
    }

    if (map.contains("CAMERA_REAR_VENDOR")) {
        if (m_cameraRearVendor != map["CAMERA_REAR_VENDOR"].toString()) {
            m_cameraRearVendor = map["CAMERA_REAR_VENDOR"].toString();
            emit cameraRearVendorChanged(m_cameraRearVendor);
        }
    }

    if (map.contains("CPU_Type")) {
        if (m_cpuType != map["CPU_Type"].toString()) {
            m_cpuType = map["CPU_Type"].toString();
            emit cpuTypeChanged(m_cpuType);
        }
    }

    if (map.contains("HDMI")) {
        if (m_hdmi != map["HDMI"].toString()) {
            m_hdmi = map["HDMI"].toString();
            emit hdmiChanged(m_hdmi);
        }
    }

    if (map.contains("Keyboard")) {
        if (m_keyboard != map["Keyboard"].toString()) {
            m_keyboard = map["Keyboard"].toString();
            emit keyboardChanged(m_keyboard);
        }
    }

    if (map.contains("KeyboardType")) {
        if (m_keyboardType != map["KeyboardType"].toString()) {
            m_keyboardType = map["KeyboardType"].toString();
            emit keyboardTypeChanged(m_keyboardType);
        }
    }

    if (map.contains("Miracast_Supported")) {
        if (m_miracastSupported != (map["Miracast_Supported"].toString() == "Yes")) {
            m_miracastSupported = (map["Miracast_Supported"].toString() == "Yes");
            emit miracastSupportedChanged(m_miracastSupported);
        }
    }

    if (map.contains("Processor1_CPUName")) {
        if (m_processorCpuName != map["Processor1_CPUName"].toString()) {
            m_processorCpuName = map["Processor1_CPUName"].toString();
            emit processorCpuNameChanged(m_processorCpuName);
        }
    }

    if (map.contains("Processor1_CPUSpeed")) {
        if (m_processorCpuSpeed != map["Processor1_CPUSpeed"].toString()) {
            m_processorCpuSpeed = map["Processor1_CPUSpeed"].toString();
            emit processorCpuSpeedChanged(m_processorCpuSpeed);
        }
    }

    if (map.contains("Processor_Name")) {
        if (m_processorName != map["Processor_Name"].toString()) {
            m_processorName = map["Processor_Name"].toString();
            emit processorNameChanged(m_processorName);
        }
    }

    if (map.contains("Processor_Numbers")) {
        if (m_processorNumbers != map["Processor_Numbers"].toInt()) {
            m_processorNumbers = map["Processor_Numbers"].toInt();
            emit processorNumbersChanged(m_processorNumbers);
        }
    }

    if (map.contains("RAM_Size")) {
        if (m_ramSize != map["RAM_Size"].toString()) {
            m_ramSize = map["RAM_Size"].toString();
            emit ramSizeChanged(m_ramSize);
        }
    }

    if (map.contains("SDRAM_Size")) {
        if (m_sdramSize != map["SDRAM_Size"].toString()) {
            m_sdramSize = map["SDRAM_Size"].toString();
            emit sdramSizeChanged(m_sdramSize);
        }
    }

    if (map.contains("SDRAM_Vendor")) {
        if (m_sdramVendor != map["SDRAM_Vendor"].toString()) {
            m_sdramVendor = map["SDRAM_Vendor"].toString();
            emit sdramVendorChanged(m_sdramVendor);
        }
    }

    if (map.contains("eMMC_DiskSize")) {
        if (m_emmcDiskSize != map["eMMC_DiskSize"].toString()) {
            m_emmcDiskSize = map["eMMC_DiskSize"].toString();
            emit emmcDiskSizeChanged(m_emmcDiskSize);
        }
    }

    if (map.contains("eMMC_ManufacturingDate")) {
        if (m_emmcManufacturingDate != map["eMMC_ManufacturingDate"].toString()) {
            m_emmcManufacturingDate = map["eMMC_ManufacturingDate"].toString();
            emit emmcManufacturingDateChanged(m_emmcManufacturingDate);
        }
    }

    if (map.contains("eMMC_ProductName")) {
        if (m_emmcProductName != map["eMMC_ProductName"].toString()) {
            m_emmcProductName = map["eMMC_ProductName"].toString();
            emit emmcProductNameChanged(m_emmcProductName);
        }
    }

    if (map.contains("eMMC_Vendor")) {
        if (m_emmcVendor != map["eMMC_Vendor"].toString()) {
            m_emmcVendor = map["eMMC_Vendor"].toString();
            emit emmcVendorChanged(m_emmcVendor);
        }
    }
}
