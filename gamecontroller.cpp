#include <iostream>
#include "gamecontroller.h"

GameController::GameController(GameView& v, GameModel& m) : view(v), model(m) {}

void GameController::launch() {
    view.printStartHeader();
    view.printData(model.getPoints());
    while (true) {
        char input = view.getUserInput();
        if (input == 'b') {
            model.addPoint();
            view.printData(model.getPoints());
        } else if (input == 'e') {
            std::cout << "Shutting down..." << std::endl;
            break;
        }
    }
}