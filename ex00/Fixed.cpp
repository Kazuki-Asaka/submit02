#include "Fixed.hpp"

// const int Fixed::fractional_bit = 8;

Fixed::Fixed() {
    fp_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs) {
    std::cout << "Copy constructor called" << std::endl;
	// fp_value = rhs.fp_value;
    *this = rhs;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
    this->fp_value = rhs.fp_value;
    return(*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (fp_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawbits member function called" << std::endl;
    this -> fp_value = raw;
}