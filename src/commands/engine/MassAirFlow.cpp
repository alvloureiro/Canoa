#include "MassAirFlow.h"

#include <string>

MassAirFlow::MassAirFlow() : Command() {
    m_commandName = std::string("MAF Command");
    m_commandPID = std::string("01 10");
}
