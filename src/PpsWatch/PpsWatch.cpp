/*
 * PpsWatch.cpp
 *
 *  Created on: 2015-06-05
 *      Author: Roger
 */

#include <src/PpsWatch/PpsWatch.h>
#include <QDebug>
#include <QStringList>

PpsWatch::PpsWatch(const QString& path, QObject *_parent) :
    QObject(_parent)
{
    emit logMessage("PpsWatch::PpsWatch()");

    m_path = path;
    m_mapTitle = "@" + path.split("/").last();

    m_ppsObject = new bb::PpsObject(path + "?wait,delta", this);
    connect(m_ppsObject, SIGNAL(readyRead()), this, SLOT(onPpsReadyRead()));

    if(!m_ppsObject->open(bb::PpsOpenMode::Subscribe)) {
        emit logMessage("Could not connect to " + path + " object: " + m_ppsObject->errorString());
    }
}

PpsWatch::~PpsWatch()
{
    emit logMessage("PpsWatch::~PpsWatch()");
    delete m_ppsObject;
    m_ppsObject = NULL;
}

void PpsWatch::changePath(const QString& path) {
    emit logMessage("PpsWatch::changePath() " + path);

    if (m_path == path) {
        emit logMessage("Same path as before, return");
        return;
    }

    m_path = path;
    m_mapTitle = "@" + path.split("/").last();

    if(!m_ppsObject->close()) {
        emit logMessage("Could not disconnect from " + m_ppsObject->objectName() + " object: " + m_ppsObject->errorString());
    }
    else {
        disconnect(m_ppsObject, SIGNAL(readyRead()), this, SLOT(onPpsReadyRead()));
    }

    m_ppsObject = new bb::PpsObject(path + "?wait,delta", this);
    connect(m_ppsObject, SIGNAL(readyRead()), this, SLOT(onPpsReadyRead()));

    if(!m_ppsObject->open(bb::PpsOpenMode::Subscribe)) {
        emit logMessage("Could not connect to " + path + " object: " + m_ppsObject->errorString());
    }
}

void PpsWatch::onPpsReadyRead() {
    emit logMessage("PpsWatch::onPpsReadyRead()");

    bool readOk;
    QByteArray data = m_ppsObject->read(&readOk);
    if(!readOk) { return; }

    bool decodeOk;
    const QVariantMap map = bb::PpsObject::decode(data, &decodeOk);
    if(!decodeOk) { return; }

    QVariantMap ppsFile;
    if (m_mapTitle == "@.all") {
        QMapIterator<QString, QVariant> i(map);
        while (i.hasNext()) {
            i.next();
            ppsFile = i.value().toMap();

            if (!ppsFile.isEmpty()) {
                ppsFile.insert("_ppsMapTitle", i.key());
                emit ppsFileReady(ppsFile);
            }
        }
    }
    else {
        ppsFile = map[m_mapTitle].toMap();

        if (!ppsFile.isEmpty()) {
            ppsFile.insert("_ppsMapTitle", m_mapTitle);
            emit ppsFileReady(ppsFile);
        }
    }
}
