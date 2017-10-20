/*
 * FacedownAndPickup.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef FACEDOWNANDPICKUP_H_
#define FACEDOWNANDPICKUP_H_

#include <src/PpsWatch/PpsWatch.h>

class FacedownAndPickup : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool facedownEnabled READ facedownEnabled NOTIFY facedownEnabledChanged);
    Q_PROPERTY(bool pickupEnabled READ pickupEnabled NOTIFY pickupEnabledChanged);
    Q_PROPERTY(int awakeFromFacedown READ awakeFromFacedown NOTIFY awakeFromFacedownChanged);
    Q_PROPERTY(int awakeFromFacedownToday READ awakeFromFacedownToday NOTIFY awakeFromFacedownTodayChanged);
    Q_PROPERTY(int awakeFromPickup READ awakeFromPickup NOTIFY awakeFromPickupChanged);
    Q_PROPERTY(int awakeFromPickupToday READ awakeFromPickupToday NOTIFY awakeFromPickupTodayChanged);
    Q_PROPERTY(int screenTimeSaved READ screenTimeSaved NOTIFY screenTimeSavedChanged);
    Q_PROPERTY(int screenTimeSavedToday READ screenTimeSavedToday NOTIFY screenTimeSavedTodayChanged);
    Q_PROPERTY(int standbyByFacedown READ standbyByFacedown NOTIFY standbyByFacedownChanged);
    Q_PROPERTY(int standbyByFacedownToday READ standbyByFacedownToday NOTIFY standbyByFacedownTodayChanged);
    Q_PROPERTY(bool inHand READ inHand NOTIFY inHandChanged);

public:
    FacedownAndPickup(QObject *_parent = 0);

    bool facedownEnabled() { return m_facedownEnabled; }
    bool pickupEnabled() { return m_pickupEnabled; }
    int awakeFromFacedown() { return m_awakeFromFacedown; }
    int awakeFromFacedownToday() { return m_awakeFromFacedownToday; }
    int awakeFromPickup() { return m_awakeFromPickup; }
    int awakeFromPickupToday() { return m_awakeFromPickupToday; }
    int screenTimeSaved() { return m_screenTimeSaved; }
    int screenTimeSavedToday() { return m_screenTimeSavedToday; }
    int standbyByFacedown() { return m_standbyByFacedown; }
    int standbyByFacedownToday() { return m_standbyByFacedownToday; }
    bool inHand() { return m_inHand; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool m_facedownEnabled;
    bool m_pickupEnabled;
    int m_awakeFromFacedown;
    int m_awakeFromFacedownToday;
    int m_awakeFromPickup;
    int m_awakeFromPickupToday;
    int m_screenTimeSaved;
    int m_screenTimeSavedToday;
    int m_standbyByFacedown;
    int m_standbyByFacedownToday;
    bool m_inHand;

    PpsWatch* m_facedownAndPickup;
    PpsWatch* m_inHandPps;

signals:
    void facedownEnabledChanged(bool&);
    void pickupEnabledChanged(bool&);
    void awakeFromFacedownChanged(int&);
    void awakeFromFacedownTodayChanged(int&);
    void awakeFromPickupChanged(int&);
    void awakeFromPickupTodayChanged(int&);
    void screenTimeSavedChanged(int&);
    void screenTimeSavedTodayChanged(int&);
    void standbyByFacedownChanged(int&);
    void standbyByFacedownTodayChanged(int&);
    void inHandChanged(bool&);
};

#endif /* FACEDOWNANDPICKUP_H_ */
