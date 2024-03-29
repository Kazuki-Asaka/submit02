#include "Point.hpp"

Point::Point() :x(), y(){

}

Point::Point(const float x, const float y) :x(x), y(y) {

}

Point::Point(const Point &rhs) {
    // std::cout << "Point Copy constructor called" << std::endl;
    *this = rhs;
}

Point::~Point() {
    // std::cout << "Destrocotr called" << std::endl;
}

Point &Point::operator=(const Point& rhs) {
    // std::cout << "Point Copy assignment operator called" << std::endl;
    const_cast<Fixed&>(this -> x) = rhs.x;
    const_cast<Fixed&>(this -> y) = rhs.y;
    return (*this);
}

Fixed Point::getX() const{
	return (this -> x);
}

Fixed Point::getY() const {
	return(this -> y);
}