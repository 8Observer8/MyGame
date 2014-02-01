#include "game.h"

Game::Game()
{
}

const Character &Game::player() const
{
    return mPlayer;
}

const QList<Level> &Game::levels() const
{
    return mLevels;
}

void Game::newGame()
{
    mPlayer = Character();
    mPlayer.setName(QStringLiteral("Ivan"));
    mPlayer.setLevel(10);
    mPlayer.setClassType(Character::Mage);

    mLevels.clear();

    Level village;
    QList<Character> villageNpcs;
    villageNpcs.append(Character(QStringLiteral("Barry the Blacksmith"), 10, Character::Warrior));
    villageNpcs.append(Character(QStringLiteral("Terry the Trader"), 10, Character::Warrior));
    village.setNpcs(villageNpcs);
    mLevels.append(village);

    Level dungeon;
    QList<Character> dungeonNpcs;
    dungeonNpcs.append(Character(QStringLiteral("Eric the Evil"), 20, Character::Mage));
    dungeonNpcs.append(Character(QStringLiteral("Eric's Sidekick #1"), 5, Character::Warrior));
    dungeonNpcs.append(Character(QStringLiteral("Eric's Sidekick #2"), 5, Character::Warrior));
    dungeon.setNpcs(dungeonNpcs);
    mLevels.append(dungeon);
}

bool Game::loadGame(SaveFormat saveFormat)
{
    return false;
}

bool Game::saveGame(SaveFormat saveFormat) const
{
    return false;
}
