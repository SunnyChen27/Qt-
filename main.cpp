#include "mainwindow.h"
#include <QApplication>
#include <QPainter>
#include "line.h"
#include "point.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


//    Point p1(20,20), p2(20,200);
//    Line l(p1,p2);
//    w.setLine(l);
    w.show();


    return a.exec();
}
