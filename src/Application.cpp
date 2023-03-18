#include "Application.h"

Application::Application(int argc, char * argv[])
    : m_argc(argc),
    m_argv(argv){

}

Application::~Application(){}

void Application::run(){
    if (Cli::cmdOptionExists(m_argv, m_argv+m_argc, "--astar")){
        std::cout << Cli::getCmdOption(m_argv, m_argv+m_argc, "--astar") << std::endl;
    }
}