#include "gameview.h"
#include "gamemodel.h"
#include <iostream>
#include <cstdio>
#include <vector>

void GameView::printData(int points, int level) {
    std::cout << "Level " << toRoman(level)<< std::endl;
    std::cout << "Points: " << points << std::endl;
}

void GameView::printStartHeader() {
    std::cout << "Canary Clicker v0.5" << std::endl;
}

char GameView::getUserInput() {
    return getchar();
}
std::string GameView::toRoman(int num) {
    std::vector<std::string> symbols = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    std::vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

    std::string roman = "";
    for (int i = values.size() - 1; i >= 0; i--) {
        while (num >= values[i]) {
            roman += symbols[i];
            num -= values[i];
        }
    }

    return roman;
}

void GameView::saveGame(int points, int level) {
    GameModel model;
    model.saveToFile("game_state.txt");
}

void GameView::loadGame(int points, int level) {
    GameModel model;
    model.loadFromFile("game_state.txt");
    points = model.getPoints();
    level = model.getLevel();
}