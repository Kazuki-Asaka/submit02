#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(int number);
	Fixed(float number);
	Fixed(const Fixed& rhs);
	~Fixed();
	Fixed& operator=(const Fixed& rhs);
	bool operator==(const Fixed& rhs)const;
	bool operator!=(const Fixed& rhs)const;
	bool operator<(const Fixed& rhs)const;
	bool operator>(const Fixed& rhs)const;
	bool operator<=(const Fixed& rhs)const;
	bool operator>=(const Fixed& rhs)const;
	Fixed operator+(const Fixed& rhs)const;
	Fixed operator-(const Fixed& rhs)const;
	Fixed operator*(const Fixed& rhs)const;
	Fixed operator/(const Fixed& rhs)const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	int getRawBits( void ) const;
	void setRawBits( int const raw);
	float tofloat(void)const ;
	int toInt(void)const;
	static const Fixed& min(const Fixed& a, const Fixed &b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed &b);
	static Fixed& max(Fixed& a, Fixed& b);
private:
	int fp_value;
	static const int fractional_bit = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif