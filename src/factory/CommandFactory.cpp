#include "CommandFactory.h"

#include <utility>

template<typename  T>
std::unique_ptr<T> CommandFactory<T>::makeCommand() {
    m_cmd = std::make_unique<T>(T());
    return std::move(m_cmd);
}
