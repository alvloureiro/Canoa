#include "MassAirFlow.h"

#include <QString>

MassAirFlow::MassAirFlow() : Command() {
    m_commandName = QString("MAF Command");
    m_commandPID = QString("01 10");
}
