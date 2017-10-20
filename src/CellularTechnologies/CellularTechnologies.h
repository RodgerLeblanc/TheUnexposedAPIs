/*
 * CellularTechnologies.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef CELLULARTECHNOLOGIES_H_
#define CELLULARTECHNOLOGIES_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QStringList>

class CellularTechnologies : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString cellSearchStatus READ cellSearchStatus NOTIFY cellSearchStatusChanged);
    Q_PROPERTY(QStringList configuredTechnologies READ configuredTechnologies NOTIFY configuredTechnologiesChanged);
    Q_PROPERTY(QString connectionState READ connectionState NOTIFY connectionStateChanged);
    Q_PROPERTY(QString displayedCarrierName READ displayedCarrierName NOTIFY displayedCarrierNameChanged);
    Q_PROPERTY(QString homeCountry READ homeCountry NOTIFY homeCountryChanged);
    Q_PROPERTY(bool isOnEmergencyCall READ isOnEmergencyCall NOTIFY isOnEmergencyCallChanged);
    Q_PROPERTY(QString networkTechnology READ networkTechnology NOTIFY networkTechnologyChanged);
    Q_PROPERTY(QString parentCarrierName READ parentCarrierName NOTIFY parentCarrierNameChanged);
    Q_PROPERTY(bool roaming READ roaming NOTIFY roamingChanged);
    Q_PROPERTY(QString scanMode READ scanMode NOTIFY scanModeChanged);
    Q_PROPERTY(int signalStrengthBars READ signalStrengthBars NOTIFY signalStrengthBarsChanged);
    Q_PROPERTY(int signalStrengthRssi READ signalStrengthRssi NOTIFY signalStrengthRssiChanged);
    Q_PROPERTY(QString technologyIndicator READ technologyIndicator NOTIFY technologyIndicatorChanged);

public:
    CellularTechnologies(QObject *_parent = 0);

    QString cellSearchStatus() { return m_cellSearchStatus; }
    QStringList configuredTechnologies() { return m_configuredTechnologies; }
    QString connectionState() { return m_connectionState; }
    QString displayedCarrierName() { return m_displayedCarrierName; }
    QString homeCountry() { return m_homeCountry; }
    bool isOnEmergencyCall() { return m_isOnEmergencyCall; }
    QString networkTechnology() { return m_networkTechnology; }
    QString parentCarrierName() { return m_parentCarrierName; }
    bool roaming() { return m_roaming; }
    QString scanMode() { return m_scanMode; }
    int signalStrengthBars() { return m_signalStrengthBars; }
    int signalStrengthRssi() { return m_signalStrengthRssi; }
    QString technologyIndicator() { return m_technologyIndicator; }

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    QString m_cellSearchStatus;
    QStringList m_configuredTechnologies;
    QString m_connectionState;
    QString m_displayedCarrierName;
    QString m_homeCountry;
    bool m_isOnEmergencyCall;
    QString m_networkTechnology;
    QString m_parentCarrierName;
    bool m_roaming;
    QString m_scanMode;
    int m_signalStrengthBars;
    int m_signalStrengthRssi;
    QString m_technologyIndicator;

    PpsWatch* m_cellularTechnologies1;
    PpsWatch* m_cellularTechnologies2;
    PpsWatch* m_cellularTechnologies3;

signals:
    void cellSearchStatusChanged(QString&);
    void configuredTechnologiesChanged(QStringList&);
    void connectionStateChanged(QString&);
    void displayedCarrierNameChanged(QString&);
    void homeCountryChanged(QString&);
    void isOnEmergencyCallChanged(bool&);
    void networkTechnologyChanged(QString&);
    void parentCarrierNameChanged(QString&);
    void roamingChanged(bool&);
    void scanModeChanged(QString&);
    void signalStrengthBarsChanged(int&);
    void signalStrengthRssiChanged(int&);
    void technologyIndicatorChanged(QString&);
};

#endif /* CELLULARTECHNOLOGIES_H_ */
