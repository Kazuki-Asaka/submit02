#include "Point.hpp"

int	main(void) {
	// Point a(0, 0);
	// Point b(4, 0);
	// Point c(2, 3);
	// Point d(2, 1);

	// if (bsp(a, b, c, d)) {
	// 	std::cout << "Yes" << std::endl;
	// }
	// else {
	// 	std::cout << "No" << std::endl;
	// }

	// Point e(0, 0);
	// if (bsp(a, b, c, e)) {
	// 	std::cout << "Yes" << std::endl;
	// }
	// else {
	// 	std::cout << "No" << std::endl;
	// }

	Point f(0, 0);
	Point g(0, 2);
	Point h(2, 0);
	// Point i(3, 3);

	// if (bsp(f, g, h, i)) {
	// 	std::cout << "Yes" << std::endl;
	// }
	// else {
	// 	std::cout << "No" << std::endl;
	// }
	
	Point j(0.5f, 0.5f);
	if (bsp(f, g, h, j)) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
}