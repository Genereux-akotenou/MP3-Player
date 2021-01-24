#include "mainplayer.h"
#include <QIcon>
#include <QApplication>
#include <QMdiSubWindow>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MainPlayer::MainPlayer(QSize windowSize, QWidget *parent) : QMainWindow(parent)
{
   //creation de la bare de menu
   resize(windowSize);
   menuLecture = menuBar()->addMenu("&Lecture");
   menuMedia = menuBar()->addMenu("&Media");
   menuAide = menuBar()->addMenu("?");

   //creation des actions
   playAction = new QAction("play", this);
   playAction->setIcon(QIcon("assets/Startup.ico"));
   nextAction = new QAction("next", this);
   nextAction->setIcon(QIcon("assets/Startup.ico"));
   prevAction = new QAction("prev", this);
   prevAction->setIcon(QIcon("assets/Startup.ico"));
   stopAction = new QAction("stop", this);
   stopAction->setIcon(QIcon("assets/Startup.ico"));
   paraAction = new QAction("play", this);
   paraAction->setIcon(QIcon("assets/Startup.ico"));
   fullScreen = new QAction("full screen", this);
   fullScreen->setIcon(QIcon("assets/Startup.ico"));
   aleatoirAct = new QAction("commuting", this);
   aleatoirAct->setIcon(QIcon("assets/Startup.ico"));
   replayAction = new QAction("replay", this);
   replayAction->setIcon(QIcon("assets/Startup.ico"));
   aideAction = new QAction("Aides", this);
   aideAction->setIcon(QIcon("assets/Startup.ico"));
   aboutUsAction = new QAction("A propos", this);
   aboutUsAction->setIcon(QIcon("assets/Startup.ico"));

   //creation des bouton
   playButton = new QPushButton(this);
   playButton->setIcon(QIcon("assets/pause.png"));
   nextButton = new QPushButton(this);
   nextButton->setIcon(QIcon("assets/next.png"));
   prevButton = new QPushButton(this);
   prevButton->setIcon(QIcon("assets/previous.png"));
   stopButton = new QPushButton(this);
   stopButton->setIcon(QIcon("assets/stop.png"));
   paraButton = new QPushButton("play", this);
   paraButton->setIcon(QIcon("assets/Startup.ico"));
   fullScreenBtn = new QPushButton(this);
   fullScreenBtn->setIcon(QIcon("assets/full-screen.png"));
   aleatoirBtn = new QPushButton(this);
   aleatoirBtn->setIcon(QIcon("assets/shuffle (1).png"));
   replayButton = new QPushButton(this);
   replayButton->setIcon(QIcon("assets/icons8-rotate-100.png"));
   progressBar =new QSlider( Qt::Horizontal, this);
   videoLevel1 = new QLabel("00:00");
   videoLevel2 = new QLabel("00:00");


   //ajout des bouttons aux menu
   //menuLecture->addAction(playAction);
   menuLecture->addAction(nextAction);
   menuLecture->addAction(prevAction);
   menuLecture->addSeparator();
   menuLecture->addAction(stopAction);
   menuLecture->addSeparator();
   menuLecture->addAction(replayAction);
   menuMedia->addAction(paraAction);
   menuMedia->addSeparator();
   menuMedia->addAction(fullScreen);
   menuMedia->addAction(aleatoirAct);
   menuMedia->addSeparator();
   menuAide->addAction(aideAction);
   menuAide->addAction(aboutUsAction);


   //creation des interces principales
   zoneCentrale = new QWidget;
   setCentralWidget(zoneCentrale);

   //creation des layouts et systee de grille
   QGridLayout *layout0 = new QGridLayout;
   QVBoxLayout *layout1 = new QVBoxLayout;
   QHBoxLayout *layout2 = new QHBoxLayout;

   //ajoutons nos element au layout
   layout2->addWidget(fullScreenBtn);
   layout2->addWidget(videoLevel1);
   layout2->addWidget(progressBar);
   layout2->addWidget(videoLevel2);
   layout2->addWidget(prevButton);
   layout2->addWidget(playButton);
   layout2->addWidget(nextButton);
   layout2->addWidget(stopButton);
   layout2->addWidget(aleatoirBtn);
   layout2->addWidget(replayButton);

   //let make magic effet
   zoneCentrale->setLayout(layout0);
   layout0->addLayout(layout1, 0, 0);
   layout0->addLayout(layout2, 0, 1);
}

