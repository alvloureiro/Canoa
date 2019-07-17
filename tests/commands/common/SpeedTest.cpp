#include "gtest/gtest.h"

#include "commands/common/Speed.h"

#include <string>


class SpeedTest: public ::testing::Test {

};

TEST_F(SpeedTest, MethodCommandName) {
    const std::string name_str = "Speed Command";
    const std::string wrong_name_str = "speed_cmd";

    Speed speed;

    EXPECT_STREQ(speed.commandName().c_str(), name_str.c_str());
    EXPECT_STRNE(speed.commandName().c_str(), wrong_name_str.c_str());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}