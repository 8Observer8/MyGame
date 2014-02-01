#ifndef LEVEL_H
#define LEVEL_H

#include <QList>

#include "character.h"

class Level
{
public:
    Level();
    const QList<Character> &npcs() const;
    void setNpcs(const QList<Character> &npcs);

private:
    QList<Character> mNpcs;
};

#endif // LEVEL_H
