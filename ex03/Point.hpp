#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &new_point);
    Point& operator=(const Point &rhs);
    ~Point();
private:
    const Fixed x;
    const Fixed y;
};

#endif