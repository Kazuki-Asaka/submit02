#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& rhs);
	~Fixed();
	const Fixed& operator=(const Fixed& rhs);
	int getRawBits( void );
	void setRawBits( int const raw);
private:
	int fp_value;
	static const int fractional_bit = 8;
};

#endif