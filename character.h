#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class Character
{
public:
    enum ClassType {
        Warrior, Mage, Archer
    };

    Character();
    Character(const QString &name, int level, ClassType classType);

    void setName(const QString &name);
    QString name() const;

    void setLevel(int level);
    int level() const;

    void setClassType(ClassType classType);
    ClassType classType() const;

private:
    QString mName;
    int mLevel;
    ClassType mClassType;
};

#endif // CHARACTER_H
