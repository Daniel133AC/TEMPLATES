#include <iostream>
#include "Point.h"

Point::Point(T xh, T yh){
    x = xh;
    y = yh;
}

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(Point &o){
    x = o.x;
    y = o.y;
}

void Point::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point::offset(T nx, T ny){
    x += nx;
    y += ny;
}

T Point::getX(){
    return x;
}

T Point::getY(){
    return y;
}

void Point::setX(T x){
    this->x = x;
}

void Point::setY(T y){
    this->y = y;
}

