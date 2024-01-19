#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed {
public:
	Fixed();
	Fixed(int number);
	Fixed(float number);
	Fixed(const Fixed& rhs);
	~Fixed();
	const Fixed& operator=(const Fixed& rhs);
	int getRawBits( void );
	void setRawBits( int const raw);
	float tofloat(void)const ;
	int toInt(void)const ;
private:
	int fp_value;
	static const int fractional_bit = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif