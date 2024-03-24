#include "gamemodel.h"

GameModel::GameModel() : points(0) {}

void GameModel::addPoint() {
    points++;
}

int GameModel::getPoints() const {
    return points;
}
