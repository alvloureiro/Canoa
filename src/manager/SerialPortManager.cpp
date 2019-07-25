#include "SerialPortManager.h"

#include <utility>

std::unique_ptr<LibSerial::SerialPort> SerialPortManager::instance() {

    return std::move<LibSerial::SerialPort>(new LibSerial::SerialPort(serialPort_1_))
}
