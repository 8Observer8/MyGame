#include "game.h"

Game::Game()
{
}

void Game::newGame()
{
    mPlayer = Character();
}

bool Game::loadGame(SaveFormat saveFormat)
{
    return true;
}

bool Game::saveGame(SaveFormat saveFormat) const
{
    return false;
}
