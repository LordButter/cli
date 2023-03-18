#pragma once

#include "Util/Cli.h"
#include <iostream>

class Application{
    private:
        int m_argc;
        char** m_argv;

    public:
        Application(int argc, char* argv[]);
        ~Application();

        void run();
};