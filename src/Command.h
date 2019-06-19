
#ifndef CANOA_COMMAND_H
#define CANOA_COMMAND_H

#include <QDebug>
#include <QMetaType>
#include <QString>

class Command {

public:
    explicit Command();
    virtual ~Command() = default;

    inline QString commandName() const { return  m_commandName; }
    inline QString commandPID() const { return m_commandPID; }

    inline QString rawValue() const { return m_value; };
    inline void setRawValue(const QString& value) { m_value = value; }

protected:
    QString m_commandName;
    QString m_commandPID;
    QString m_value;
};

Q_DECLARE_METATYPE(Command)

QDebug operator<<(QDebug dbg, const Command &c);


#endif //CANOA_COMMAND_H
