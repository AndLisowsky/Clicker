#include "gameview.h"
#include <iostream>
#include <cstdio>

void GameView::printData(int points) {
    std::cout << "Points: " << points << std::endl;
}

void GameView::printStartHeader() {
    std::cout << "Canary Clicker v0.5" << std::endl;
}

char GameView::getUserInput() {
    return getchar();
}
