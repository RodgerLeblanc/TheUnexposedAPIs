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

#include "applicationui.hpp"

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>

using namespace bb::cascades;

ApplicationUI::ApplicationUI() :
        QObject(),
        m_androidStatus(new AndroidStatus(this)),
        m_appLauncher(new AppLauncher(this)),
        m_applicationWindowSize(new ApplicationWindowSize(this)),
        m_backlight(new Backlight(this)),
        m_batteryManager(new BatteryManager(this)),
        m_batterySavingMode(new BatterySavingMode(this)),
        m_bluetoothWatcher(new BluetoothWatcher(this)),
        m_calendarUpcomingEvents(new CalendarUpcomingEvents(this)),
        m_cellularTechnologies(new CellularTechnologies(this)),
        m_countryCode(new CountryCode(this)),
        m_dataRoaming(new DataRoaming(this)),
        m_debugToken(new DebugToken(this)),
        m_deviceProperties(new DeviceProperties(this)),
        m_facedownAndPickup(new FacedownAndPickup(this)),
        m_fileSystem(new FileSystem(this)),
        m_fontSettings(new FontSettings(this)),
        m_fullscreenPid(new FullscreenPid(this)),
        m_hardwareInventory(new HardwareInventory(this)),
        m_hubWatch(new HubWatch(this)),
        m_languageAndInput(new LanguageAndInput(this)),
        m_paymentMethod(new PaymentMethod(this)),
        m_phoneActive(new PhoneActive(this)),
        m_physicalButtons(new PhysicalButtons(this)),
        m_progressStatus(new ProgressStatus(this)),
        m_radioManager(new RadioManager(this)),
        m_reconditionInfo(new ReconditionInfo(this)),
        m_systemSettings(new SystemSettings(this)),
        m_t2w(new Talk2WatchApi(this)),
        m_timeZone(new TimeZone(this)),
        m_wifiWatcher(new WifiWatcher(this))
{
    // Add this one line of code to all your projects, it will save you a ton of problems
    // when dealing with foreign languages. No more ??? characters.
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    // This is one example of how to use signals from all the classes in this project
    connect(m_batteryManager, SIGNAL(mAhConsumedNowChanged(double&)), this, SLOT(onMAhConsumedNowChanged(double&)));

    // All objects can be accessed from QML too
    QmlDocument *qml = QmlDocument::create("asset:///main.qml").parent(this);
    qml->setContextProperty("_androidStatus", m_androidStatus);
    qml->setContextProperty("_appLauncher", m_appLauncher);
    qml->setContextProperty("_applicationWindowSize", m_applicationWindowSize);
    qml->setContextProperty("_backlight", m_backlight);
    qml->setContextProperty("_batteryManager", m_batteryManager);
    qml->setContextProperty("_batterySavingMode", m_batterySavingMode);
    qml->setContextProperty("_bluetoothWatcher", m_bluetoothWatcher);
    qml->setContextProperty("_calendarUpcomingEvents", m_calendarUpcomingEvents);
    qml->setContextProperty("_cellularTechnologies", m_cellularTechnologies);
    qml->setContextProperty("_countryCode", m_countryCode);
    qml->setContextProperty("_dataRoaming", m_dataRoaming);
    qml->setContextProperty("_debugToken", m_debugToken);
    qml->setContextProperty("_deviceProperties", m_deviceProperties);
    qml->setContextProperty("_facedownAndPickup", m_facedownAndPickup);
    qml->setContextProperty("_fileSystem", m_fileSystem);
    qml->setContextProperty("_fontSettings", m_fontSettings);
    qml->setContextProperty("_fullscreenPid", m_fullscreenPid);
    qml->setContextProperty("_hardwareInventory", m_hardwareInventory);
    qml->setContextProperty("_hubWatch", m_hubWatch);
    qml->setContextProperty("_languageAndInput", m_languageAndInput);
    qml->setContextProperty("_paymentMethod", m_paymentMethod);
    qml->setContextProperty("_phoneActive", m_phoneActive);
    qml->setContextProperty("_physicalButtons", m_physicalButtons);
    qml->setContextProperty("_progressStatus", m_progressStatus);
    qml->setContextProperty("_radioManager", m_radioManager);
    qml->setContextProperty("_reconditionInfo", m_reconditionInfo);
    qml->setContextProperty("_systemSettings", m_systemSettings);
    qml->setContextProperty("_t2w", m_t2w);
    qml->setContextProperty("_timeZone", m_timeZone);
    qml->setContextProperty("_wifiWatcher", m_wifiWatcher);

    // Create root object for the UI
    AbstractPane *root = qml->createRootObject<AbstractPane>();

    // Set created root object as the application scene
    Application::instance()->setScene(root);
}

void ApplicationUI::onMAhConsumedNowChanged(double& mAhConsumedNow) {
    Q_UNUSED(mAhConsumedNow);

    // Uncomment to see this printed to console. This is only an example.
//    qDebug() << "mAhConsumedNow:" << mAhConsumedNow;
}
