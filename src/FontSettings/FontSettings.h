/*
 * FontSettings.h
 *
 *  Created on: 2016-01-31
 *      Author: Roger
 */

#ifndef FONTSETTINGS_H_
#define FONTSETTINGS_H_

#include <src/PpsWatch/PpsWatch.h>

class FontSettings : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int fontSize READ fontSize NOTIFY fontSizeChanged);

public:
    FontSettings(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    int fontSize() { return m_fontSize; }

    int m_fontSize;

    PpsWatch* m_fontSettings;

signals:
    void fontSizeChanged(int&);
};

#endif /* FONTSETTINGS_H_ */
