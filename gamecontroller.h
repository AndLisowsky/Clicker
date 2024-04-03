#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "gameview.h"
#include "gamemodel.h"

class GameController {

public:
    GameController(GameView& v, GameModel& m);
    void launch();
private:
    GameView& view;
    GameModel& model;
    const char exitCondition = 'e';
    const char pointAddCondition = 'b';
};

#endif
