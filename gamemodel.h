#ifndef GAMEMODEL_H
#define GAMEMODEL_H

class GameModel {
private:
    int points;

public:
    GameModel();
    void addPoint();
    int getPoints() const;
};

#endif
