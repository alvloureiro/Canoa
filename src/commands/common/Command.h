
#ifndef CANOA_COMMAND_H
#define CANOA_COMMAND_H

#include <string>

class Command {

public:
    explicit Command();
    virtual ~Command() = default;

    inline std::string commandName() const { return  m_commandName; }
    inline std::string commandPID() const { return m_commandPID; }

    inline std::string rawValue() const { return m_value; };
    inline void setRawValue(const std::string& value) { m_value = value; }

protected:
    std::string m_commandName;
    std::string m_commandPID;
    std::string m_value;
};

std::ostream& operator<<(std::ostream&, const Command&);

#endif //CANOA_COMMAND_H
