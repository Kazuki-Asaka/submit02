#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& rhs);
	~Fixed();
	Fixed& operator=(const Fixed& rhs);
	int getRawBits( void )const;
	void setRawBits( int const raw);
private:
	int fp_value;
	static const int fractional_bit = 8;
};

#endif