#ifndef GAME_H
#define GAME_H

#include <QList>

#include "character.h"
#include "level.h"

class Game
{
public:
    Game();

    enum SaveFormat {
        JSon, Binary
    };

    const Character &player() const;
    const QList<Level> &levels() const;

    void newGame();
    bool loadGame(SaveFormat saveFormat);
    bool saveGame(SaveFormat saveFormat) const;

private:
    Character mPlayer;
    QList<Level> mLevels;
};

#endif // GAME_H
