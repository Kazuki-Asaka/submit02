#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << "------------------" << std::endl;
    a.setRawBits(12);
    b.setRawBits(15);
    c.setRawBits(30);
    std::cout << "change a row bits : " << a.getRawBits() << std::endl;
    std::cout << "change b row bits : " << b.getRawBits() << std::endl;
    std::cout << "change c row bits : " << c.getRawBits() << std::endl;

    return (0);
}