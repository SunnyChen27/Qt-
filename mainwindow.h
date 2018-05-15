#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "line.h"
#include "point.h"
#include<QTime>
//#include <iostream>
//#include <string>
#include<QKeyEvent>
#include "person.h"
#include "house.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLine(Line l);
    void keyPressEvent(QKeyEvent *);
    Person * person1;
    House * house1;

protected slots:
    void movedLine();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    Line line;
    Line *belowLine;
    QTimer *timer2;
    //QTimer *timer1;
};

#endif // MAINWINDOW_H
