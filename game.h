#ifndef GAME_H
#define GAME_H

#include <character.h>

class Game
{
public:
    Game();

    enum SaveFormat {
        JSon, Binary
    };

    void newGame();
    bool loadGame(SaveFormat saveFormat);
    bool saveGame(SaveFormat saveFormat) const;

private:
    Character mPlayer;
};

#endif // GAME_H
