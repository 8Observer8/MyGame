#include <QCoreApplication>
#include "game.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Game game;
    game.newGame();

    qDebug() << game.player().name();
    qDebug() << game.player().level();
    qDebug() << game.player().classType();
    qDebug() << "";

    foreach (Level level, game.levels()) {
        foreach (Character npc, level.npcs()) {
            qDebug() << "name:" << npc.name() << ", level: " << npc.level() << ", classType: " << npc.classType();
        }
        qDebug() << "";
    }

    if (!game.saveGame(Game::JSon)) {
        qWarning("Error: couldn't save game.");
    }

    return a.exec();
}
