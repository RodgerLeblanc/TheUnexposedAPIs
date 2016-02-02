/*
 * AppLauncher.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

/*
 *
 * Special thanks to Anmipo from CrackBerry for this code snippet.
 *
 * You can encourage him by buying his excellent app : AppNinja
 *
 */


#ifndef APPLAUNCHER_H_
#define APPLAUNCHER_H_

#include <QDebug>
#include <QObject>
#include <bb/PpsObject>

class AppLauncher : public QObject
{
    Q_OBJECT

public:
    AppLauncher(QObject *_parent = 0) {
        if (_parent)
            this->setParent(_parent);
    }

    Q_INVOKABLE static void openThisApp(const QString& appId) {
        /*
         * This code launches a BB10 application by its ID.
         * The IDs can be found here:
         * /pps/system/navigator/applications/applications.*
         */

        //appId = "sys.calculator.gYABgJidBvuZ89m_1j4PV2712.A";

        bb::PpsObject pps("/pps/services/navigator/control");
        if (pps.open(bb::PpsOpenMode::Publish)) {
            QVariantMap map;
            map.insert("dname", appId);
            if (pps.writeMessage("launchApp", map)) {
                qDebug() << "Error writing PPS message:" << pps.error() << pps.errorString();
            } else {
                qDebug() << "PPS message sent";
            }
        } else {
            qDebug() << "PPS object open failed:" << pps.errorString();
        }
    }
};

#endif /* APPLAUNCHER_H_ */
