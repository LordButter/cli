#include "Util/Cli.h"

char* Cli::getCmdOption(char** begin, char** end, const std::string& option){
    char** itr = std::find(begin, end, option);
    if (itr != end && ++itr != end){
        return *itr;
    }
    return 0;
}

bool Cli::cmdOptionExists(char** begin, char** end, const std::string& option){
    return std::find(begin, end, option) != end;
}

void Cli::moveToCursorPosition(int x, int y){
    if(x >= 0 && y >= 0){
        printf("\033[2J");
        printf("\033[%d;%dH", y, x);
    }
}