#include "Fixed.hpp"


// #include <stdio.h>
// int	main(void) {
// 	Fixed	a;
// 	Fixed const	b(10);
// 	Fixed const	c(42.42f);
// 	Fixed const	d(b);

// 	a = Fixed(1234.4321f);

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;

	// std::cout.operator<<("hello");
	// operator<<(std::cout, "hello\n");
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// int	i = 1;
	// printf("%d\n", ++i); // 2
	// printf("%d\n", i++); // 2
	// printf("%d\n", i);

	// i++;

	// int i = 0;
	// std::cout << ++(++i) + ++i << std::endl;
	// std::cout << (++i)++ + ++i << std::endl;
	// std::cout << ++(i++) + ++i << std::endl;
	// std::cout << ++(2) + ++i << std::endl;
	// std::cout << 2++ + ++i << std::endl;
// }

int	main(void) {
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(a);

	if (a == c)
		std::cout << "==test ok" << std::endl;
	if (a != b)
		std::cout << "!=test ok" << std::endl;
	std::cout << "---------operator<< test-------" << std::endl;
	operator<<(std::cout ,a);
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	// std::cout << Fixed(1.5f) * Fixed(2.0f) << std::endl;
	// std::cout << Fixed(1.5f) * Fixed(3.0f) << std::endl;
	// std::cout << Fixed(1.5f) * Fixed(10.0f) << std::endl;
	// std::cout << 1.5f * 10.0f << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	 return (0);
}