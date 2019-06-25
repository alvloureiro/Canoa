#include "Command.h"

Command::Command()
        : m_commandPID("")
        , m_commandName("")
        , m_value("") {

}

std::ostream& operator<<(std::ostream &out, const Command &cmd) {
    std::string message = "[" + cmd.commandName() + " - PID: " + cmd.commandPID() + "]";
    return out << message;
}
