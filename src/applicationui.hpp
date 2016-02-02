/*
 * Copyright (c) 2011-2015 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ApplicationUI_HPP_
#define ApplicationUI_HPP_

#include <src/AndroidStatus/AndroidStatus.h>
#include <src/AppLauncher/AppLauncher.h>
#include <src/ApplicationWindowSize/ApplicationWindowSize.h>
#include <src/Backlight/Backlight.h>
#include <src/BatteryManager/BatteryManager.h>
#include <src/BatterySavingMode/BatterySavingMode.h>
#include <src/BluetoothWatcher/BluetoothWatcher.h>
#include <src/CalendarUpcomingEvents/CalendarUpcomingEvents.h>
#include <src/CellularTechnologies/CellularTechnologies.h>
#include <src/CountryCode/CountryCode.h>
#include <src/DataRoaming/DataRoaming.h>
#include <src/DebugToken/DebugToken.h>
#include <src/DeviceProperties/DeviceProperties.h>
#include <src/FacedownAndPickup/FacedownAndPickup.h>
#include <src/FileSystem/FileSystem.h>
#include <src/FontSettings/FontSettings.h>
#include <src/FullscreenPid/FullscreenPid.h>
#include <src/HardwareInventory/HardwareInventory.h>
#include <src/HubWatch/HubWatch.h>
#include <src/LanguageAndInput/LanguageAndInput.h>
#include <src/PaymentMethod/PaymentMethod.h>
#include <src/Pebble/Talk2WatchApi.h>
#include <src/PhoneActive/PhoneActive.h>
#include <src/PhysicalButtons/PhysicalButtons.h>
#include <src/ProgressStatus/ProgressStatus.h>
#include <src/RadioManager/RadioManager.h>
#include <src/ReconditionInfo/ReconditionInfo.h>
#include <src/SystemSettings/SystemSettings.h>
#include <src/TimeZone/TimeZone.h>
#include <src/WifiWatcher/WifiWatcher.h>

#include <QObject>

/*!
 * @brief Application UI object
 *
 * Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ApplicationUI : public QObject
{
    Q_OBJECT
public:
    ApplicationUI();
    virtual ~ApplicationUI() {}

private slots:
    void onMAhConsumedNowChanged(double&);

private:
    AndroidStatus* m_androidStatus;
    AppLauncher* m_appLauncher;
    ApplicationWindowSize* m_applicationWindowSize;
    Backlight* m_backlight;
    BatteryManager* m_batteryManager;
    BatterySavingMode* m_batterySavingMode;
    BluetoothWatcher* m_bluetoothWatcher;
    CalendarUpcomingEvents* m_calendarUpcomingEvents;
    CellularTechnologies* m_cellularTechnologies;
    CountryCode* m_countryCode;
    DataRoaming* m_dataRoaming;
    DebugToken* m_debugToken;
    DeviceProperties* m_deviceProperties;
    FacedownAndPickup* m_facedownAndPickup;
    FileSystem* m_fileSystem;
    FontSettings* m_fontSettings;
    FullscreenPid* m_fullscreenPid;
    HardwareInventory* m_hardwareInventory;
    HubWatch* m_hubWatch;
    LanguageAndInput* m_languageAndInput;
    PaymentMethod* m_paymentMethod;
    PhoneActive* m_phoneActive;
    PhysicalButtons* m_physicalButtons;
    ProgressStatus* m_progressStatus;
    RadioManager* m_radioManager;
    ReconditionInfo* m_reconditionInfo;
    SystemSettings* m_systemSettings;
    Talk2WatchApi* m_t2w;
    TimeZone* m_timeZone;
    WifiWatcher* m_wifiWatcher;
};

#endif /* ApplicationUI_HPP_ */
