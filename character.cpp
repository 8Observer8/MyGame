#include "character.h"

Character::Character() :
    mLevel(0),
    mClassType(Warrior)
{
}

Character::Character(const QString &name, int level, Character::ClassType classType) :
    mName(name),
    mLevel(level),
    mClassType(classType)
{

}

void Character::setName(const QString &name)
{
    mName = name;
}

QString Character::name() const
{
    return mName;
}

void Character::setLevel(int level)
{
    mLevel = level;
}

int Character::level() const
{
    return mLevel;
}

void Character::setClassType(ClassType classType)
{
    mClassType = classType;
}

Character::ClassType Character::classType() const
{
    return mClassType;
}
