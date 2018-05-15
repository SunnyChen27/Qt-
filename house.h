#ifndef HOUSE_H
#define HOUSE_H

#include<QPainter>
#include"point.h"
class House
{public:
        House(Point &xy, int w, int h, int n_w);
        House();
        House(const House &h);
        void set_n_w(int n);
        int  get_n_w();
        void set_w_w(int w,int n);
        int  get_w_w();
        void set_h_w(int h, int n);
        int  get_h_w();
        void set_w_d(int n);
        int  get_w_d();
        void set_h_d(int n);
        int  get_h_d();
        void set_h_r(int n);
        int  get_h_r();
        Point get_lt();
        Point get_rb();
        void set_point_rb(const Point &s, int &h, int &w);
        //void drawit(QPainter & painter);
        void setHousePosition(const Point &s);
        void setSize(Point &s, int &w, int &h);
        int getHousewidth();
        int getHouseheight();
    private:
        Point   lt;
        Point   rb;
        int     width;
        int     height;
        int     w_w;
        int     h_w;
        int     w_d;
        int     h_d;
        int     n_w;
        int     h_r;
public:
    void show(QPainter & painter);
};

#endif // HOUSE_H
