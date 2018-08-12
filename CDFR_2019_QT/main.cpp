#include "mainwindow.h"
#include <QApplication>
#include <QTimer>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap(":/new/icon/images/CBOT_new_logo.png");
    QSplashScreen splash(pixmap);
    splash.show();
    a.thread()->sleep(2); // wait for just 1 second and then show main window
    a.processEvents();
    MainWindow w;
    w.show();
    splash.finish(&w);


    return a.exec();
}
