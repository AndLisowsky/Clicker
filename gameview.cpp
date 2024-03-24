#include "gameview.h"
#include <iostream>

void GameView::printData(int points) {
    std::cout << "Zdobyte punkty: " << points << std::endl;
}

void GameView::printStartHeader() {
    std::cout << "Canary Clicker v0.1" << std::endl;
}
