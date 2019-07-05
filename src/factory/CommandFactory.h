
#ifndef CANOA_COMMANDFACTORY_H
#define CANOA_COMMANDFACTORY_H

#include <memory>

template<typename T>
class CommandFactory {
public:
    CommandFactory(const CommandFactory&) = delete;
    CommandFactory&operator=(const CommandFactory) = delete;

    ~CommandFactory() = default;

    static std::unique_ptr<T> make();

private:
    CommandFactory() = default;
    static std::unique_ptr<T> m_cmd;
};


#endif //CANOA_COMMANDFACTORY_H
