#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "line.h"
#include <QTimer>
#include <stdio.h>
#include <QMessageBox>
#include <string>
#include"person.h"
#include"house.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(movedLine()));//timeoutslot()为自定义槽
    //connect(timer1,SIGNAL(timeout()),this,SLOT(movedLine()));
    //timer1->start(1000);
    timer2->start(500);
    Point p1(100,40), p2(100,60);
    this->belowLine = new  Line(p1, p2);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer2;
   // delete timer1;
}

void MainWindow::setLine(Line l){
    this->line = l;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
   // pen.setColor(Qt::black);
    QBrush brush;//(Qt::gray);
    //painter.setPen(QPen(Qt::black,4));//设置画笔形式
    painter.setBrush(brush);
    painter.drawPixmap(rect(), QPixmap("://images/timg.jpeg"));
   // painter.drawPixmap(rect(), QPixmap("://images/image.jpg"));
    this->line.show(painter);
    this->belowLine->show(painter);
    this->person1->show(painter);
    this->house1->show(painter);
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    static int ai=40;
    static int bi=60;

    if(e->key() == Qt::Key_Z)
    {
        //        QMessageBox::about(NULL, "You Press Key", "<font color='red'>Key Z </font>");
        bi = bi + 5;
        ai = ai + 5;
        Point a(100, ai);
        Point b(100, bi);
        this->belowLine->setStart(a);
        this->belowLine->setEnd(b);
    }
    else
    {
        //        QMessageBox::about(NULL, "You Press Key", "<font color='red'>Key </font>"+ QString::number(e->key(),10));
        bi = bi - 5;
        ai = ai - 5;
        Point a(100, ai);
        Point b(100, bi);
        this->belowLine->setStart(a);
        this->belowLine->setEnd(b);
    }
}


void MainWindow::movedLine()
{
    static int i = 1;
    i = i + 1;
    Point p1(i,i), p2(i+1,i+1);

    if (p1.pong()==true)
    {
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        i = rand()%100;
        //        QMessageBox::about(NULL, "alert", "<font color='red'>go out </font>" + QString::number(i,10));

        p1.setX(i);
        p1.setY(i);
        p2.setX(i+1);
        p2.setY(i+1);
    }

    Line l1(p1,p2);
    this->setLine(l1);
    this->repaint();

}
