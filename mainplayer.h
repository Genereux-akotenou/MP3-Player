#ifndef MAINPLAYER_H
#define MAINPLAYER_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMdiArea>
#include <QSlider>
#include <QPushButton>
#include <QLabel>

class MainPlayer : public QMainWindow
{
    Q_OBJECT
    public:
        MainPlayer(QSize windowSize = QSize(100, 100), QWidget *parent = nullptr);

    private:
        //interface principales
        QWidget *zoneCentrale;
        //creation de menu
        QMenu *menuMedia;
        QMenu *menuLecture;
        QMenu *menuAide;
        //creation des actions
        QAction *playAction;
        QAction *nextAction;
        QAction *prevAction;
        QAction *stopAction;
        QAction *paraAction;
        QAction *fullScreen;
        QAction *aleatoirAct;
        QAction *replayAction;
        QAction *aideAction;
        QAction *aboutUsAction;
        //creation des boutons
        QPushButton *playButton;
        QPushButton *nextButton;
        QPushButton *prevButton;
        QPushButton *stopButton;
        QPushButton *paraButton;
        QPushButton *fullScreenBtn;
        QPushButton *aleatoirBtn;
        QPushButton *replayButton;
        QSlider *progressBar;
        QLabel *videoLevel1;
        QLabel *videoLevel2;

};
#endif // MAINPLAYER_H
