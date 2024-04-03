#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include <string>

class GameView {
public:
    void printData(int points, int level);
    void printStartHeader();
    char getUserInput();
    std::string toRoman(int num);

    void saveGame(int points, int level);
    void loadGame(int points, int level);
};

#endif
