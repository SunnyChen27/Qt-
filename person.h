#ifndef PERSON_H
#define PERSON_H
#include"point.h"
#include <QPainter>
class Person
{ public:
        Person(Point& h,int& r0, Point &shoulder, Point &leg,Point &foot,Point &hand);
        void setr(int);
        Point gethead();
        Point getshoulder_l();
        Point getshoulder_r();
        Point getleg_l();
        Point getleg_r();
        Point getfoot_r();
        Point getfoot_l();
        Point gethand_l();
        Point gethand_r();
        int getr();
        //void en_drawit(QPainter& painter, float i = 0, int direction = 0);
    private:
        Point head;
        int r;
        Point shoulder_l;
        Point shoulder_r;
        Point leg_l;
        Point leg_r;
        Point foot_r;
        Point foot_l;
        Point hand_l;
        Point hand_r;
public:
    void show(QPainter & painter);
};

#endif // PERSON_H
