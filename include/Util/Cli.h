#pragma once

#include <stdio.h>
#include <algorithm>

class Cli{
    public:
        static char* getCmdOption(char** begin, char** end, const std::string& option);
        static bool cmdOptionExists(char** begin, char** end, const std::string& option);
        static void moveToCursorPosition(int x, int y);
};