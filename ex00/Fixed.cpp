#include "Fixed.hpp"

// const int Fixed::fractional_bit = 8;

Fixed::Fixed() {
    fp_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs) {
    std::cout << "Copy constructor called" << std::endl;
	fp_value = rhs.fp_value;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

const Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
    this->fp_value = rhs.fp_value;
    return(rhs);
}

int Fixed::getRawBits(void) {
    // std::cout << "getRawBits member function called" << std::endl;
    // // for (int i = 0; i < fractional_bit; i++) {
    //     fp_value = fp_value * (1 << fractional_bit);
    // // }
	// return (static_cast<int>(fp_value));
    return (fp_value);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawbits member function called" << std::endl;
    this -> fp_value = raw;
}