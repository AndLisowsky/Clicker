#include <fstream>
#include <iostream>
#include "gamemodel.h"

GameModel::GameModel() : points(0), level(1) {}

void GameModel::addPoint() {
    points++;
    if (points % 5 == 0) level++;
}

int GameModel::getPoints() const {
    return points;
}

int GameModel::getLevel() const {
    return level;
}
void GameModel::saveToFile(const std::string &filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << points << std::endl;
        file << level << std::endl;
        file.close();
        std::cout << "Saved." << std::endl;
    } else {
        std::cerr << "Unable to save file." << std::endl;
    }
}

void GameModel::loadFromFile(const std::string &filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> points;
        file >> level;
        file.close();
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }
}