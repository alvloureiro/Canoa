#include "ThrottlePosition.h"

#include <QString>

ThrottlePosition::ThrottlePosition() : Command() {
    m_commandName = QString("Throttle Position command");
    m_commandPID = QString("01 11");
}
