#include <iostream>
#include "gamecontroller.h"

GameController::GameController(GameView& v, GameModel& m) : view(v), model(m) {}

void GameController::launch() {
    view.printStartHeader();
    view.loadGame(model.getPoints(), model.getLevel());
    view.printData(model.getPoints(), model.getLevel());
    while (true) {
        char input = view.getUserInput();
        if (input == pointAddCondition) {
            model.addPoint();
            view.printData(model.getPoints(), model.getLevel());
        } else if (input == exitCondition) {
            view.saveGame(model.getPoints(), model.getLevel());
            std::cout << "Shutting down..." << std::endl;
            break;
        }
    }
}