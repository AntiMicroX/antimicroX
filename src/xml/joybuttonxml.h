/* antimicrox Gamepad to KB+M event mapper
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
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

#ifndef JOYBUTTONXML_H
#define JOYBUTTONXML_H

#include <QObject>

class JoyButton;
class QXmlStreamReader;
class QXmlStreamWriter;

class JoyButtonXml : public QObject
{
    Q_OBJECT

  public:
    explicit JoyButtonXml(JoyButton *joyButton, QObject *parent = nullptr);

    virtual bool readButtonConfig(QXmlStreamReader *xml);
    virtual void readConfig(QXmlStreamReader *xml);
    virtual void writeConfig(QXmlStreamWriter *xml);

  private:
    JoyButton *m_joyButton;
};

#endif // JOYBUTTONXML_H
