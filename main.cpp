#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication::setStyle("Fusion");
    QApplication a(argc, argv);
    //qDebug() << QStyleFactory::keys();
    MainWindow w;
    w.show();
    return a.exec();
}
