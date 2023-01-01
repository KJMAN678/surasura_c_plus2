#include <iostream>
#include "point.h"

// コンストラクタの実装
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

// X座標を返すゲッタの実装
double Point::getX()
{
    return this->x;
}

// Y座標を返すゲッタの実装
double Point::getY()
{
    return this->y;
}

// + 演算子のオーバーロードの実装
Point Point::operator+(const Point &p)
{
    Point ans(this->x + p.x, this->y + p.y);
    return ans;
}

// - 演算子のオーバーロードの実装
Point Point::operator-(const Point &p)
{
    Point ans(this->x - p.x, this->y - p.y);
    return ans;
}

// == 演算子のオーバーロードの実装
bool Point::operator==(const Point &p)
{
    return this->x == p.x && this->y == p.y;
}

bool Point::operator!=(const Point &p)
{
    return !(*this == p);
}

// >> 演算子のオーバーロードの実装
std::istream &operator>>(std::istream &is, Point &p)
{
    is >> p.x >> p.y;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "x = " << p.x << ", y = " << p.y;
    return os;
}