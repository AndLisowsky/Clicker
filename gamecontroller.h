#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "gameview.h"
#include "gamemodel.h"

class GameController {
private:
    GameView& view;
    GameModel& model;

public:
    GameController(GameView& v, GameModel& m);
    void launch();
};

#endif
