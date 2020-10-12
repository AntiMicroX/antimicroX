/* antimicrox Gamepad to KB+M event mapper
 * Copyright (C) 2015 Travis Nickles <nickles.travis@gmail.com>
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "baseeventhandler.h"

#include "joybuttonslot.h"
#include "messagehandler.h"

#include <QDebug>

BaseEventHandler::BaseEventHandler(QObject *parent)
    : QObject(parent)
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);
}

BaseEventHandler::~BaseEventHandler() { qInstallMessageHandler(MessageHandler::myMessageOutput); }

QString BaseEventHandler::getErrorString()
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);

    return lastErrorString;
}

/**
 * @brief Do nothing by default. Allow child classes to specify text to output
 *     to a text stream.
 */
void BaseEventHandler::printPostMessages() { qInstallMessageHandler(MessageHandler::myMessageOutput); }

/**
 * @brief Do nothing by default. Useful for child classes to define behavior.
 * @param Displacement of X coordinate
 * @param Displacement of Y coordinate
 * @param Screen number or -1 to use default
 */
void BaseEventHandler::sendMouseAbsEvent(int xDis, int yDis, int screen)
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);

    Q_UNUSED(xDis);
    Q_UNUSED(yDis);
    Q_UNUSED(screen);
}

/**
 * @brief Do nothing by default. Useful for child classes to define behavior.
 * @param Displacement of X coordinate
 * @param Displacement of Y coordinate
 * @param Bounding box width
 * @param Bounding box height
 */
void BaseEventHandler::sendMouseSpringEvent(int xDis, int yDis, int width, int height)
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);

    Q_UNUSED(xDis);
    Q_UNUSED(yDis);
    Q_UNUSED(width);
    Q_UNUSED(height);
}

/**
 * @brief Do nothing by default. Useful for child classes to define behavior.
 * @param Displacement of X coordinate
 * @param Displacement of Y coordinate
 */
void BaseEventHandler::sendMouseSpringEvent(int xDis, int yDis)
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);

    Q_UNUSED(xDis);
    Q_UNUSED(yDis);
}

void BaseEventHandler::sendTextEntryEvent(QString maintext)
{
    qInstallMessageHandler(MessageHandler::myMessageOutput);

    Q_UNUSED(maintext);
}
