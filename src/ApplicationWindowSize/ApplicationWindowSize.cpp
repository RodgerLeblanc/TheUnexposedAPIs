/*
 * ApplicationWindowSize.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/ApplicationWindowSize/ApplicationWindowSize.h>
#include <stdlib.h>     /* getenv */

ApplicationWindowSize::ApplicationWindowSize(QObject *_parent) :
    QObject(_parent)
{
    m_width = QString(getenv("WIDTH")).toInt();
    m_height = QString(getenv("HEIGHT")).toInt();
    m_coverWidth = QString(getenv("COVERWIDTH")).toInt();
    m_coverHeight = QString(getenv("COVERHEIGHT")).toInt();

    emit widthChanged(m_width);
    emit heightChanged(m_height);
    emit coverWidthChanged(m_coverWidth);
    emit coverHeightChanged(m_coverHeight);
}
