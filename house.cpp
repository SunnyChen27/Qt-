#include "house.h"
#include <QPainter>
#include <cmath>
#include<algorithm>
#include<iostream>
using namespace std;
void House::show(QPainter &painter){
    QPen pen;
    pen.setColor(Qt::black);
    QBrush brush(Qt::gray);
    painter.setPen(QPen(Qt::black,4));//设置画笔形式
    painter.setBrush(brush);
    painter.drawLine(600,200,400,400);
    painter.drawLine(600,200,800,400);
    painter.drawLine(800,400,400,400);
    painter.drawLine(750,400,450,400);
    painter.drawLine(450,400,450,700);
    painter.drawLine(750,400,750,700);
    painter.drawLine(750,700,450,700);
    painter.drawLine(670,500,670,550);
    painter.drawLine(670,550,720,550);
    painter.drawLine(720,550,720,500);
    painter.drawLine(670,500,720,500);
    painter.drawLine(670,525,720,525);
    painter.drawLine(695,500,695,550);
    painter.drawLine(500,700,500,550);
    painter.drawLine(550,700,550,550);
    painter.drawLine(500,550,550,550);
    painter.setPen(QPen(Qt::gray,4));
    painter.drawLine(660,260,660,170);
    painter.drawLine(720,320,720,170);
    painter.drawLine(660,170,720,170);
}
