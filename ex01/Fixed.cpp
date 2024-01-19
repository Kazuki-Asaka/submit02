#include "Fixed.hpp"

// const int Fixed::fractional_bit = 8;

Fixed::Fixed(){
    this -> fp_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int number){
    std::cout << "Int constructor called" << std::endl;
    fp_value = number * (1 << fractional_bit);
}

Fixed::Fixed(float number){
    std::cout << "Float constructor called" << std::endl;
    fp_value = static_cast<int>(number * (1 << fractional_bit));
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
    std::cout << "getRawBits member function called" << std::endl;
    // for (int i = 0; i < fractional_bit; i++) {
    //     fp_value = fp_value * 2;
    // }
	return (static_cast<int>(fp_value));
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawbits member function called" << std::endl;
    this -> fp_value = raw;
}

float Fixed::tofloat(void)const{
    float fnumber = static_cast<float>(fp_value);

    fnumber = fnumber / (1 << fractional_bit);
    return (fnumber);
}

int Fixed::toInt(void)const{
    int inumber = fp_value;

    inumber = inumber / (1 << fractional_bit);
    return(inumber);
}

std::ostream &operator<<(std::ostream& o, const Fixed& rhs) {//クラス外で宣言　std::coutはstdクラスという別物のクラス
    float fnumber = rhs.tofloat();
    o << fnumber;
    return (o);
}