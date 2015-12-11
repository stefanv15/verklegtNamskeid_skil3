#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap(QPixmap("stef.jpg"));
    splash->show();

    MainWindow window;

    QTimer::singleShot(2000, splash, SLOT(close()));
    QTimer::singleShot(2000, &window, SLOT(show()));
    //window.show();

    return a.exec();
}

