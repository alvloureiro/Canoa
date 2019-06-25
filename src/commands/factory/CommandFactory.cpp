#include "CommandFactory.h"

#include <utility>

template<typename  T>
std::unique_ptr<T> CommandFactory<T>::make() {
    m_cmd = std::make_unique<T>(T());
    return std::move(m_cmd);
}
