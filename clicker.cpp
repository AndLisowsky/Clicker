#include <iostream>
#include "gameview.h"
#include "gamemodel.h"
#include "gamecontroller.h"

int main() {
    GameView view;
    GameModel model;
    GameController controller(view, model);

    controller.launch();

    return 0;
}
