#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap(QPixmap("22.jpg"));
    splash->show();

    MainWindow window;

    QTimer::singleShot(1000, splash, SLOT(close()));
    QTimer::singleShot(1000, &window, SLOT(show()));

    return a.exec();
}
