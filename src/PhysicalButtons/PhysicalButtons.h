/*
 * PhysicalButtons.h
 *
 *  Created on: 2015-06-05
 *      Author: Roger
 */

#ifndef PHYSICALBUTTONS_H_
#define PHYSICALBUTTONS_H_

#define DOUBLE_CLICK_INTERVAL 300
#define LONG_PRESS_INTERVAL 1000

#include <QObject>
#include <bb/PpsObject>
#include <QTimer>

class PhysicalButtons : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool minusButtonIsUp READ minusButtonIsUp NOTIFY minusButtonIsUpChanged);
    Q_PROPERTY(bool playpauseButtonIsUp READ playpauseButtonIsUp NOTIFY playpauseButtonIsUpChanged);
    Q_PROPERTY(bool plusButtonIsUp READ plusButtonIsUp NOTIFY plusButtonIsUpChanged);
    Q_PROPERTY(bool powerButtonIsUp READ powerButtonIsUp NOTIFY powerButtonIsUpChanged);

public:
    PhysicalButtons(QObject *_parent = 0);
    virtual ~PhysicalButtons();

private slots:
    void onPpsReadyRead();
    void onMinusButtonTimeout();
    void onPlaypauseButtonTimeout();
    void onPlusButtonTimeout();
    void onPowerButtonTimeout();
    void onSoftResetButtonsTimeout();

private:
    bool minusButtonIsUp() { return m_minusButtonIsUp; }
    bool playpauseButtonIsUp() { return m_playpauseButtonIsUp; }
    bool plusButtonIsUp() { return m_plusButtonIsUp; }
    bool powerButtonIsUp() { return m_powerButtonIsUp; }

    bool m_minusButtonIsUp;
    bool m_playpauseButtonIsUp;
    bool m_plusButtonIsUp;
    bool m_powerButtonIsUp;

    bb::PpsObject* m_ppsObject;

    QTimer* m_minusButtonTimer;
    QTimer* m_playpauseButtonTimer;
    QTimer* m_plusButtonTimer;
    QTimer* m_powerButtonTimer;
    QTimer* m_softResetButtonsTimer;

    QVariantMap m_buttonIsUpMap;

signals:
    void logMessage(const QString&);

    void minusButtonIsUpChanged(bool&);
    void playpauseButtonIsUpChanged(bool&);
    void plusButtonIsUpChanged(bool&);
    void powerButtonIsUpChanged(bool&);

    void minusButtonDoublePressed();
    void minusButtonLongPressed();
    void minusButtonPressed();
    void playpauseButtonDoublePressed();
    void playpauseButtonLongPressed();
    void playpauseButtonPressed();
    void plusButtonDoublePressed();
    void plusButtonLongPressed();
    void plusButtonPressed();
    void powerButtonDoublePressed();
    void powerButtonLongPressed();
    void powerButtonPressed();
    void screenshotButtonsPressed();
    void screenshotButtonsDoublePressed();
    void softResetButtonsLongPressed();
};

#endif /* PHYSICALBUTTONS_H_ */
