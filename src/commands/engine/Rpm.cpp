#include "Rpm.h"

#include <QString>

Rpm::Rpm() : Command() {
    m_commandName = QString("RPM Command");
    m_commandPID = QString("01 0C");
}