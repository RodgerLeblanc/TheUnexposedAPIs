/*
 * FileSystem.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

#include <src/PpsWatch/PpsWatch.h>

class FileSystem : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int boxCapacity READ boxCapacity NOTIFY boxCapacityChanged);
    Q_PROPERTY(int boxFreespace READ boxFreespace NOTIFY boxFreespaceChanged);
    Q_PROPERTY(bool boxOnline READ boxOnline NOTIFY boxOnlineChanged);

    Q_PROPERTY(int dropboxCapacity READ dropboxCapacity NOTIFY dropboxCapacityChanged);
    Q_PROPERTY(int dropboxFreespace READ dropboxFreespace NOTIFY dropboxFreespaceChanged);
    Q_PROPERTY(bool dropboxOnline READ dropboxOnline NOTIFY dropboxOnlineChanged);

    Q_PROPERTY(bool localBusy READ localBusy NOTIFY localBusyChanged);
    Q_PROPERTY(int localCapacity READ localCapacity NOTIFY localCapacityChanged);
    Q_PROPERTY(int localFreespace READ localFreespace NOTIFY localFreespaceChanged);
    Q_PROPERTY(bool localOnline READ localOnline NOTIFY localOnlineChanged);

    Q_PROPERTY(bool sdBusy READ sdBusy NOTIFY sdBusyChanged);
    Q_PROPERTY(int sdCapacity READ sdCapacity NOTIFY sdCapacityChanged);
    Q_PROPERTY(int sdFreespace READ sdFreespace NOTIFY sdFreespaceChanged);
    Q_PROPERTY(bool sdOnline READ sdOnline NOTIFY sdOnlineChanged);

public:
    FileSystem(QObject *_parent = 0);

    int boxCapacity() { return m_boxCapacity; }
    int boxFreespace() { return m_boxFreespace; }
    bool boxOnline() { return m_boxOnline; }

    int dropboxCapacity() { return m_dropboxCapacity; }
    int dropboxFreespace() { return m_dropboxFreespace; }
    bool dropboxOnline() { return m_dropboxOnline; }

    bool localBusy() { return m_localBusy; }
    int localCapacity() { return m_localCapacity; }
    int localFreespace() { return m_localFreespace; }
    bool localOnline() { return m_localOnline; }

    bool sdBusy() { return m_sdBusy; }
    int sdCapacity() { return m_sdCapacity; }
    int sdFreespace() { return m_sdFreespace; }
    bool sdOnline() { return m_sdOnline; }

private slots:
    void onBoxDrivePpsFileReady(const QVariantMap&);
    void onDropboxDrivePpsFileReady(const QVariantMap&);
    void onLocalDrivePpsFileReady(const QVariantMap&);
    void onSdDrivePpsFileReady(const QVariantMap&);

private:
    int m_boxCapacity;
    int m_boxFreespace;
    bool m_boxOnline;

    int m_dropboxCapacity;
    int m_dropboxFreespace;
    bool m_dropboxOnline;

    bool m_localBusy;
    int m_localCapacity;
    int m_localFreespace;
    bool m_localOnline;

    bool m_sdBusy;
    int m_sdCapacity;
    int m_sdFreespace;
    bool m_sdOnline;

    PpsWatch* m_boxDrive;
    PpsWatch* m_dropboxDrive;
    PpsWatch* m_localDrive;
    PpsWatch* m_sdDrive;

signals:
    void boxCapacityChanged(int&);
    void boxFreespaceChanged(int&);
    void boxOnlineChanged(bool&);

    void dropboxCapacityChanged(int&);
    void dropboxFreespaceChanged(int&);
    void dropboxOnlineChanged(bool&);

    void localBusyChanged(bool&);
    void localCapacityChanged(int&);
    void localFreespaceChanged(int&);
    void localOnlineChanged(bool&);

    void sdBusyChanged(bool&);
    void sdCapacityChanged(int&);
    void sdFreespaceChanged(int&);
    void sdOnlineChanged(bool&);
};

#endif /* FILESYSTEM_H_ */
