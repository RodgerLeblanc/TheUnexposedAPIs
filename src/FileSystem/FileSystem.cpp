/*
 * FileSystem.cpp
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#include <src/FileSystem/FileSystem.h>

FileSystem::FileSystem(QObject *_parent) :
    QObject(_parent),
    m_boxDrive(new PpsWatch("/pps/system/filesystem/remote/Box", this)),
    m_dropboxDrive(new PpsWatch("/pps/system/filesystem/remote/Dropbox", this)),
    m_localDrive(new PpsWatch("/pps/system/filesystem/local/emmc", this)),
    m_sdDrive(new PpsWatch("/pps/system/filesystem/removable/sdcard", this))
{
    connect(m_boxDrive, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onBoxDrivePpsFileReady(const QVariantMap&)));
    connect(m_dropboxDrive, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onDropboxDrivePpsFileReady(const QVariantMap&)));
    connect(m_localDrive, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onLocalDrivePpsFileReady(const QVariantMap&)));
    connect(m_sdDrive, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onSdDrivePpsFileReady(const QVariantMap&)));
}

void FileSystem::onBoxDrivePpsFileReady(const QVariantMap& map) {
    if (map.contains("capacity")) {
        if (m_boxCapacity != map["capacity"].toInt()) {
            m_boxCapacity = map["capacity"].toInt();
            emit boxCapacityChanged(m_boxCapacity);
        }
    }

    if (map.contains("freespace")) {
        if (m_boxFreespace != map["freespace"].toInt()) {
            m_boxFreespace = map["freespace"].toInt();
            emit boxFreespaceChanged(m_boxFreespace);
        }
    }

    if (map.contains("online")) {
        if (m_boxOnline != map["online"].toBool()) {
            m_boxOnline = map["online"].toBool();
            emit boxOnlineChanged(m_boxOnline);
        }
    }
}

void FileSystem::onDropboxDrivePpsFileReady(const QVariantMap& map) {
    if (map.contains("capacity")) {
        if (m_dropboxCapacity != map["capacity"].toInt()) {
            m_dropboxCapacity = map["capacity"].toInt();
            emit dropboxCapacityChanged(m_dropboxCapacity);
        }
    }

    if (map.contains("freespace")) {
        if (m_dropboxFreespace != map["freespace"].toInt()) {
            m_dropboxFreespace = map["freespace"].toInt();
            emit dropboxFreespaceChanged(m_dropboxFreespace);
        }
    }

    if (map.contains("online")) {
        if (m_dropboxOnline != map["online"].toBool()) {
            m_dropboxOnline = map["online"].toBool();
            emit dropboxOnlineChanged(m_dropboxOnline);
        }
    }
}

void FileSystem::onLocalDrivePpsFileReady(const QVariantMap& map) {
    if (map.contains("busy")) {
        if (m_localBusy != map["busy"].toInt()) {
            m_localBusy = map["busy"].toInt();
            emit localBusyChanged(m_localBusy);
        }
    }

    if (map.contains("capacity")) {
        if (m_localCapacity != map["capacity"].toInt()) {
            m_localCapacity = map["capacity"].toInt();
            emit localCapacityChanged(m_localCapacity);
        }
    }

    if (map.contains("freespace")) {
        if (m_localFreespace != map["freespace"].toInt()) {
            m_localFreespace = map["freespace"].toInt();
            emit localFreespaceChanged(m_localFreespace);
        }
    }

    if (map.contains("online")) {
        if (m_localOnline != map["online"].toBool()) {
            m_localOnline = map["online"].toBool();
            emit localOnlineChanged(m_localOnline);
        }
    }
}

void FileSystem::onSdDrivePpsFileReady(const QVariantMap& map) {
    if (map.contains("busy")) {
        if (m_sdBusy != map["busy"].toInt()) {
            m_sdBusy = map["busy"].toInt();
            emit sdBusyChanged(m_sdBusy);
        }
    }

    if (map.contains("capacity")) {
        if (m_sdCapacity != map["capacity"].toInt()) {
            m_sdCapacity = map["capacity"].toInt();
            emit sdCapacityChanged(m_sdCapacity);
        }
    }

    if (map.contains("freespace")) {
        if (m_sdFreespace != map["freespace"].toInt()) {
            m_sdFreespace = map["freespace"].toInt();
            emit sdFreespaceChanged(m_sdFreespace);
        }
    }

    if (map.contains("online")) {
        if (m_sdOnline != map["online"].toBool()) {
            m_sdOnline = map["online"].toBool();
            emit sdOnlineChanged(m_sdOnline);
        }
    }
}
