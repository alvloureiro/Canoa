#include "Speed.h"

Speed::Speed() : Command()
{
    m_commandName = QString("Speed Command");
    m_commandPID = QString("01 0D");
    m_value = QString("");
}
