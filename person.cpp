#include "person.h"
#include <QPainter>
#include <cmath>
#include<algorithm>
#include<iostream>
using namespace std;
void Person::show(QPainter &painter){
    static int p_number=1;
    QPen pen;
    pen.setColor(Qt::black);
    QBrush brush(Qt::gray);
    painter.setPen(QPen(Qt::black,4));//设置画笔形式
    painter.setBrush(brush);
    painter.drawEllipse(170,170,100,100);//head
    painter.drawRect(155,270,125,175);//body
    painter.setPen(QPen(Qt::gray,10));//设置画笔形式
    //painter.drawLine(155,320,100,400);
    //painter.drawLine(280,320,340,400);//arm

    if(p_number%2==1){
        QPainterPath path1;
        QPainterPath path2;
        path1.moveTo(195,345);path1.lineTo(320,580);
        path1.moveTo(245,345);path1.lineTo(120,580);
        path2.moveTo(155,320);path2.lineTo(50,380);
        path2.moveTo(280,320);path2.lineTo(340,350);
        painter.drawPath(path1);
        painter.drawPath(path2);
    }
    else{
        painter.drawLine(195,345,150,580);
        painter.drawLine(245,345,290,580);//leg
        painter.drawLine(155,320,100,400);
        painter.drawLine(280,320,340,400);//arm
    }
   p_number+=1;

}
