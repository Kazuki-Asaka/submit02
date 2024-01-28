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
    // std::cout << "before round" << number * (1 << fractional_bit) <<std::endl;
    std::cout << "Float constructor called" << std::endl;
    fp_value = static_cast<int>(roundf(number * (1 << fractional_bit)));
    // std::cout << "not round :" << fp_value << std::endl;

    // fp_value = static_cast<int>(number * (1 << fractional_bit));
    // std::cout << "round :" << fp_value << std::endl;
}

Fixed::Fixed(const Fixed& rhs) {
    std::cout << "Copy constructor called" << std::endl;
	fp_value = rhs.fp_value;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//
const Fixed& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
    this->fp_value = rhs.fp_value;
    return(rhs);
}

bool Fixed::operator==(const Fixed& rhs) const{
    return (this -> fp_value == rhs.fp_value);
}

bool Fixed::operator!=(const Fixed& rhs) const{
    return !(*this == rhs);
    // return(operator==(rhs));//
    // return !(this == rhs);//thisがポインタなのでアドレスの比較になる
}

bool Fixed::operator<(const Fixed& rhs) const{
    return (this->fp_value < rhs.fp_value);
}

bool Fixed::operator>(const Fixed&rhs) const{
    return (this -> fp_value < rhs.fp_value);
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return !(*this > rhs);
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return !(*this < rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed tmp;
    tmp.fp_value = this -> fp_value + rhs.fp_value;
    return(tmp);
}

Fixed Fixed::operator-(const Fixed& rhs)const {
    Fixed tmp;
    tmp.fp_value = this -> fp_value - rhs.fp_value;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& rhs)const {
    Fixed tmp;
    tmp.fp_value = this -> fp_value * (rhs.fp_value / (1 << fractional_bit));
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    Fixed tmp;
    tmp.fp_value = this -> fp_value / rhs.fp_value * (1 << fractional_bit);
    return(tmp);
}

Fixed& Fixed::operator++() {
    ++(this -> fp_value);
    return(*this);
}

Fixed Fixed::operator++(int) {
    const Fixed tmp = *this;

    ++(*this);
    return (tmp);
}

Fixed& Fixed::operator--() {
    --(this -> fp_value);
    return (*this);
}

Fixed Fixed::operator--(int) {
    const Fixed tmp= *this;

    --(*this);
    return (tmp);
}
//
int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    // for (int i = 0; i < fractional_bit; i++) {
    //     fp_value = fp_value * 2;
    // }
	// return (static_cast<int>(fp_value));
    return (fp_value);
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

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return(a);
    else
        return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a >= b)
        return (a);
    else
        return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a >= b)
        return (a);
    else
        return (b);
}