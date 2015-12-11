#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap(QPixmap("C:/Users/Eyþór/Pictures/stef.jpg"));
    splash->show();

    MainWindow window;

    QTimer::singleShot(3000, splash, SLOT(close()));
    QTimer::singleShot(3000, &window, SLOT(show()));
    //window.show();

    return a.exec();
}

