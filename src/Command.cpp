#include "Command.h"

#include <utility>

Command::Command()
        : m_commandPID("")
        , m_commandName("") {

}

QString operator<<(QString str, const Command &cmd) {
    str = cmd.commandPID();
    return str;
}

QDebug operator<<(QDebug dbg, const Command &c) {
    QDebugStateSaver saver(dbg);
    dbg.nospace() << "(" << c.commandName() << " - PID: " << c.commandPID() << ")";
    return dbg;
}
