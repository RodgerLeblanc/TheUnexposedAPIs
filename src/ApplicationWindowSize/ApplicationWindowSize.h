/*
 * ApplicationWindowSize.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef APPLICATIONWINDOWSIZE_H_
#define APPLICATIONWINDOWSIZE_H_

#include <QObject>

class ApplicationWindowSize : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int width READ width NOTIFY widthChanged);
    Q_PROPERTY(int height READ height NOTIFY heightChanged);
    Q_PROPERTY(int coverWidth READ coverWidth NOTIFY coverWidthChanged);
    Q_PROPERTY(int coverHeight READ coverHeight NOTIFY coverHeightChanged);

public:
    ApplicationWindowSize(QObject *_parent = 0);

private:
    int width() { return m_width; }
    int height() { return m_height; }
    int coverWidth() { return m_coverWidth; }
    int coverHeight() { return m_coverHeight; }

    int m_width;
    int m_height;
    int m_coverWidth;
    int m_coverHeight;

signals:
    void widthChanged(int&);
    void heightChanged(int&);
    void coverWidthChanged(int&);
    void coverHeightChanged(int&);
};

#endif /* APPLICATIONWINDOWSIZE_H_ */
