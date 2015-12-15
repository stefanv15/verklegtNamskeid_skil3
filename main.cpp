#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap(QPixmap("stebo.jpg"));
    splash->show();*/

    MainWindow window;

    //QTimer::singleShot(100, splash, SLOT(close()));
    //QTimer::singleShot(100, &window, SLOT(show()));
    window.show();

    return a.exec();
}

