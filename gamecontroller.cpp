#include <iostream>
#include "gamecontroller.h"

GameController::GameController(GameView& v, GameModel& m) : view(v), model(m) {}

void GameController::launch() {
    char input;
    view.printStartHeader();

    while (true) {
        std::cin >> input;

        if (input == 'b') {
            model.addPoint();
            view.printData(model.getPoints());
        } else if (input == 'e') {
            std::cout << "Zamykanie programu..." << std::endl;
            break;
        }
    }
}