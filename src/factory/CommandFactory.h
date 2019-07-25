
#ifndef CANOA_COMMANDFACTORY_H
#define CANOA_COMMANDFACTORY_H

#include <memory>

template<typename T>
class CommandFactory {
public:
    CommandFactory(CommandFactory const&) = delete;
    CommandFactory&operator=(CommandFactory const&) = delete;

    ~CommandFactory() = default;

    static std::unique_ptr<T> makeCommand();

private:
    CommandFactory() = default;
    static std::unique_ptr<T> m_cmd;
};


#endif //CANOA_COMMANDFACTORY_H
