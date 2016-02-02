The Unexposed APIs (beginner)
-----

The Unexposed APIs is a collection of easy-to-implement C++ code snippets built in wrapper classes, every properties and functions are also available in QML so even a developer with almost no experience with C++ will be able to use these classes. They are mostly built around the PPS objects already available that many developers seem to be unaware of their existence or unaware of the method to read them adequately.

You'll probably see classes that you find similar to already available Cascades objects or BPS, I decided to include them anyway because I find them easier to implement than their official alternative (ie: battery.h BPS) or my classes are available on more OS Version than their official alternative  or my classes doesn't need a permission that would be needed otherwise (ie: PhoneActive).

Most of these classes are read-only, but they will help you build context aware apps that can better adapt to your user unique profile.

Keep in mind that PPS was never meant to be used as an official way to retrieve settings or properties, the PPS structure of an object can change without notice with any OS update. I have only tested those PPS on my own Passport, results may vary depending on the device used. I tried to stay clear of PPS that were device dependant, but never trust another developer testing.

Here's a short description of each class, look at their corresponding code for dependencies and special note on implementation. 



AndroidStatus
Data source: /pps/services?/android/status

Keep track of some properties of Android Runtime, such as if the runtime is fullscreen now, is it showing a virtual keyboard or is the runtime still running.



AppLauncher
Data source: /pps/services/navigator/control (Publish mode)

Open any app without needing to Invoke it, can even be used in headless app without a NotificationDialog (from what I remember, didn't test it lately).



ApplicationWindowSize
Data source: getenv()

Retrieve the width and height of the fullscreen window size and active frame window size. Screen window size can be retrieved easily with DisplayInfo but active frame window size is not accessible from any other API.



Backlight
Data source 1: /pps/services/backlight/*
Data source 2: bkltctl command line

Keep track or set the backlight brightness of the physical keyboard and the screen. The OS might override the brightness value set with this class at any time, mostly when ambiant light sensor detects a darker environment.



BatteryManager
Data source:? /pps/system/BattMgr/status

Complete solution for everything related to battery and charger infos, similar to battery.h BPS but easier to deal with. This class also includes a custom formula to retrieve the current mAh consumed, if you keep track of all mAh consumed since the phone was fully charged, you'll be able to know exactly how much mAh is left before the phone will shutdown (usually shutdown at around 10% of the battery capacity).



BatterySavingMode
Data source: /pps/services/bfx/*

Keep track of the different settings associated with Battery Saving Mode.



BluetoothWatcher
Data source: /pps/services/?bluetooth/remote_devices/.all

Keep track of the bluetooth devices that are connected to the OS.



CalendarUpcomingEvents
Data source: /pps/services/?pim/calendar_upcoming_events
(needs access_pimdomain_calendars permission)

Keep track of the next Calendar upcoming event without the need to query all Calendar accounts and sort the different entries manually. 



CellularTechnologies
Data source 1: /pps/services/?cellular/radioctrl/.all
Data source 2: /pps/services/cellular/uicc/card0/status_public
Data source 3: /pps/services/rum/csm/status_public

Keep track of signal strength, network technologie used, roaming state and carrier info.



?CountryCode
Data source: /pps/services/geolocation/country/status

Keep track of user country code.



DataRoaming
Data source: /pps/services/?cds/cnice/status_persistent

Keep track of data services while roaming setting.



DebugToken
Data source: /pps?/system/development/devmode

Keep track of your debug token infos.



?DeviceProperties
Data source: /pps/services/deviceproperties

List the different device properties like device name, du value, screen resolution and screen dpi.



FacedownAndPickup
Data source 1: /pps/services/sensor/pickup/.all
Data source 2: /pps/services/sensor/hub_gestures

Keep track of the data and settings associated with Lift To Wake, Flip To Save Power aand Hold To Stay Awake dvanced interactions.



FileSystem
Data source: /pps?/system/filesystem/*

Get drives capacity and free space, among with other details such as availability.



FontSetting
Data source: /pps/services/??font/settings

Keep track of font size set by the user in Settings -> Display.



FullscreenPid
Data source: /pps/services/?navigator/state

Keep track of the pid of the app that is currently fullscreen. Some system apps keep the same pid from bootup until power down, but most apps will get a new pid each time they are started. Can be used to get notified when the user is currently viewing the Homescreen, which has a pid of 0. Can also be used in conjunction with pidin command line. Don't trust curr_window value.



HardwareInventory
Data source: /pps/services/?hw_info/inventory

List the different hardware used in the device.



HubWatch
Data source: /pps/services/pim/notifybar

Keep track of all Hub accounts unread count and splat state. Only future Hub updates will be catch, you can't query the actual unread count for a specified Hub account. Best to use within an headless app that keep track at all time of past unread counts.



LanguageAndInput
Data source: /pps/services/?input/options

Keep track of language used by the keyboard and the different settings from Settings -> Language And Input.



NumericKeyboard
Data source: virtualkeyboard.h BPS

Get access to an undocumented input mode not available in TextFieldInputMode and TextAreInputMode.



PaymentMethod
Data source: /pps/services/?paymentsystem/status_public

Keep track of the payment method used ?with user's BBID.



?Pebble
Data source: N/A
(need QT += network added to your pro file)

Talk2WatchApi from Benjamin Sliwa. Adding smartwatch notifications to your app now only need one line of code added (outside of declaration and initialization of the object). Currently support Pebble and Vector smartwatches, Bridge or Talk2Watch Pro app required to get notifications but using this code on a device where none of those apps are installed will not do anything (it's safe to use it on a device where those apps are absent).



PhoneActive
Data source: /pps/services/phone/public/status

Keep track of the phone calling state without the need for access_phone permission.



?PhysicalButtons
Data source: /pps/system/buttons/status

Keep track of button press of power button and previous/play/next buttons. Also handles long press and double click events as well as screenshot attempt (previous + next), power down attempt (power long press) and soft reset attempt (previous + next long press). Doesn't affect MediaKeyWatcher, meaning that you can use this class even if another app is connected to the MediaKey signals, both your app and the app that is using the MediaKeyWatcher will received their respective signals.



ProgressStatus
Data source: /pps/services/?progress/status

Keep track of any data that is displayed in the progress bar seen when you swipe down from top to show Quick Settings. Data frequently shown in this progress bar are BlackBerry World downloads/installations, Dropbox and Box uploads/downloads and Youtube uploads.



QCodec 
Data source: QCodec 

One line of code to add support for UTF8 characters. No more myString.toUtf8()



RadioManager
Data source 1: /pps/services/unifiedradiomgr/status
Data source 2: /pps/services/geolocation/status

Keep track of Airplane Mode, Bedside Mode, Bluetooth state, Cellular state, Data Service state, NFC state, Wifi state and GPS state.



ReconditionInfo
Data source: /pps/services/recondition_info

Retrieve whether the device is a reconditioned unit or not.


?
SystemSettings
Data source: /pps?/system/settings

Keep track of some settings set by the user, such as message on lock screen and swipe to wake value.


??
TimeZone
Data source: /pps/services/?network-time/status

Keep track of the current timezone and the different settings in Settings -> Date and Time.



WifiWatcher
Data source: /pps/services/wifi/status_public

Keep track of the wifi connected and available networks.




LICENSE
--------------
The MIT License (MIT)

Copyright (c) 2016 Roger Leblanc

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
