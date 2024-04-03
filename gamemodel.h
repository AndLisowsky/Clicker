#ifndef GAMEMODEL_H
#define GAMEMODEL_H
#include <string>

class GameModel {

public:
    GameModel();
    void addPoint();
    int getPoints() const;
    int getLevel() const;

    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
private:
    int points;
    int level;
};

#endif
