#include "level.h"

Level::Level()
{
}

void Level::setNpcs(const QList<Character> &npcs)
{
    mNpcs = npcs;
}

const QList<Character> &Level::npcs() const
{
    return mNpcs;
}
