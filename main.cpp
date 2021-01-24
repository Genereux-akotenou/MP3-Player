#include "mainplayer.h"
#include <QApplication>
#include <QSize>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication geoApp(argc, argv);

    //recuperons la taille de l'ordinateur
    QSize size = qApp->screens()[0]->size();

    //creation du menu principal
    MainPlayer myWindow(size);
    myWindow.show();

    return geoApp.exec();
}
