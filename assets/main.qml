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

import bb.cascades 1.3
import "QmlAccessor"

Page {
    id: mainPage
    property int screenWidth: _applicationWindowSize.width
    property int screenHeight: _applicationWindowSize.height
    property int activeFrameWidth: _applicationWindowSize.coverWidth
    property int activeFrameHeight: _applicationWindowSize.coverHeight
    
    ScrollView {
        Container {
            ClassTemplate { 
                className: "AndroidStatus"
                AndroidStatus {}
            }
            Divider {}
            ClassTemplate { 
                className: "AppLauncher"
                AppLauncher {}
            }
            Divider {}
            ClassTemplate {
                className: "ApplicationWindowSize"
                ApplicationWindowSize {}
            }
            Divider {}
            ClassTemplate { 
                className: "Backlight"
                Backlight {}
            }
            Divider {}
            ClassTemplate { 
                className: "BatteryManager"
                BatteryManager {}
            }
            Divider {}
            ClassTemplate { 
                className: "BluetoothWatcher"
                BluetoothWatcher {}
            }
            Divider {}
            ClassTemplate { 
                className: "CalendarUpcomingEvents"
                CalendarUpcomingEvents {}
            }
            Divider {}
            ClassTemplate { 
                className: "CellularTechnologies"
                CellularTechnologies {}
            }
            Divider {}
            ClassTemplate { 
                className: "CountryCode"
                CountryCode {}
            }
            Divider {}
            ClassTemplate { 
                className: "DataRoaming"
                DataRoaming {}
            }
            Divider {}
            ClassTemplate { 
                className: "DebugToken"
                DebugToken {}
            }
            Divider {}
            ClassTemplate { 
                className: "DeviceProperties"
                DeviceProperties {}
            }
            Divider {}
            ClassTemplate { 
                className: "FacedownAndPickup"
                FacedownAndPickup {}            
            }
            Divider {}
            ClassTemplate {
                className: "FileSystem"
                FileSystem {}
            }
            Divider {}
            ClassTemplate {
                className: "FontSettings"
                FontSettings {}
            }
            Divider {}
            ClassTemplate {
                className: "FullscreenPid"
                FullscreenPid {}
            }
            Divider {}
            ClassTemplate {
                className: "HardwareInventory"
                HardwareInventory {}
            }
            Divider {}
            ClassTemplate {
                className: "HubWatch"
                HubWatch {}
            }
            Divider {}
            ClassTemplate {
                className: "LanguageAndInput"
                LanguageAndInput {}
            }
            Divider {}
            ClassTemplate {
                className: "PaymentMethod"
                PaymentMethod {}
            }
            Divider {}
            ClassTemplate {
                className: "PhoneActive"
                PhoneActive {}
            }
            Divider {}
            ClassTemplate { 
                className: "PhysicalButtons"
                PhysicalButtons {} 
            }
            Divider {}
            ClassTemplate {
                className: "ProgressStatus"
                ProgressStatus {}
            }
            Divider {}
            ClassTemplate {
                className: "RadioManager"
                RadioManager {}
            }
            Divider {}
            ClassTemplate {
                className: "ReconditionInfo"
                ReconditionInfo {}
            }
            Divider {}
            ClassTemplate { 
                className: "Smartwatch"
                Smartwatch {}
            }
            Divider {}
            ClassTemplate {
                className: "SystemSettings"
                SystemSettings {}
            }
            Divider {}
            ClassTemplate {
                className: "TimeZone"
                TimeZone {}
            }
            Divider {}
            ClassTemplate {
                className: "WifiWatcher"
                WifiWatcher {}
            }
        }
    }
}
