#include <QCoreApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Game game;
    game.newGame();

    if (!game.saveGame(Game::JSon)) {
        qWarning("Error: couldn't save game.");
    }

    return a.exec();
}
