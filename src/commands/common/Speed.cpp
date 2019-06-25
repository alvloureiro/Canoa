#include "Speed.h"

#include <QString>

Speed::Speed() : Command() {
    m_commandName = QString("Speed Command");
    m_commandPID = QString("01 0D");
}
