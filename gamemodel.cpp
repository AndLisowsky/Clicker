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
void GameModel::saveToFile(const std::string& filename) const {
    std::ofstream file(filename, std::ios::out | std::ios::trunc); // Ustawiamy flagę ios::trunc, aby w przypadku istnienia pliku, nadpisać go
    if (file.is_open()) {
        file << points << " " << level;
        std::cout << "Saved." << std::endl;
    } else {
        std::cerr << "Error." << std::endl;
    }
    file.close();
}


void GameModel::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        file >> points >> level;
        std::cout << "Game loaded." << std::endl;
    } else {
        std::cerr << "Game load error." << std::endl;
    }
    file.close();
}