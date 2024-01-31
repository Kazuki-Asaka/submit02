#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    // Fixed area(Fixed(0.5f) * ((b.getX() - a.getX()) * (c.getY() -a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY())));
    // Fixed s(Fixed(1)/ (Fixed(2) * area) * ((point.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (point.getY() - a.getY())));
    // Fixed t(Fixed(1)/ (Fixed(2) * area) * ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY())));
    // if ((static_cast<float>(0)< s.tofloat() && s.tofloat() < static_cast<float>(1)) && (static_cast<float>(0)< t.tofloat() && t.tofloat() < static_cast<float>(1)) && (static_cast<float>(0)< (Fixed(1) - s - t).tofloat() && (Fixed(1) - s - t).tofloat() < static_cast<float>(1))) {
    //     std::cout << "area is " << area << std::endl;
    //     std::cout << "s is " << s << std::endl;
    //     std::cout << "t is " << t << std::endl;
    //     return (true);
    // }
    // else {
    //     std::cout << "area is " << area << std::endl;
    //     std::cout << "s is " << s << std::endl;
    //     std::cout << "t is "<< t << std::endl;
    //     return(false);
    // }

    // Fixed area(Fixed(0.5f) * (Fixed(-1) * b.getY() * c.getX() + a.getY() * (Fixed(-1) * b.getX() + c.getX()) + a.getX() * (b.getY() - c.getY()) + b.getX() * c.getY()));
    // Fixed s(Fixed(1) / (Fixed(2) * area) * (a.getY() * c.getX() - a.getX() * c.getY() + (c.getY() - a.getY()) * point.getX() + (a.getX() - c.getX()) * point.getY()));
    // Fixed t(Fixed(1) / (Fixed(2) * area) * (a.getX() * b.getY() - a.getY() * b.getX() + (a.getY() - b.getY()) * point.getX() + (b.getX() - a.getX()) * point.getY()));
    // if ((static_cast<float>(0)< s.tofloat() && s.tofloat() < static_cast<float>(1)) && (static_cast<float>(0)< t.tofloat() && t.tofloat() < static_cast<float>(1)) && (static_cast<float>(0)< (Fixed(1) - s - t).tofloat() && (Fixed(1) - s - t).tofloat() < static_cast<float>(1))) {
    //     std::cout << "area is " << area << std::endl;
    //     std::cout << "s is " << s << std::endl;
    //     std::cout << "t is "<< t << std::endl;
    //     return (true);
    // }
    // else {
    //     std::cout << "area is " << area << std::endl;
    //     std::cout << "s is " << s << std::endl;
    //     std::cout << "t is "<< t << std::endl;
    //     return(false);
    // }

    Fixed c1((b.getX() - a.getX()) * (point.getY() - b.getY()) - (b.getY() - a.getY()) * (point.getX() - b.getX()));
    Fixed c2((c.getX() - b.getX()) * (point.getY() - c.getY()) - (c.getY() - b.getY()) * (point.getX() - c.getX()));
    Fixed c3((a.getX() - c.getX()) * (point.getY() - a.getY()) - (a.getY() - c.getY()) * (point.getX() - a.getX()));
    // std::cout << c1 << std::endl;
    // std::cout << c2 << std::endl;
    // std::cout << c3 << std::endl;
    if ((c1 > Fixed(0) && c2 > Fixed(0) && c3 > Fixed(0)) || (c1 < Fixed(0) && c2 < Fixed(0) && c3 < Fixed(0))) {
        return (true);
    }
    else
        return (false);
}