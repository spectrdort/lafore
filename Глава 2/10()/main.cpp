#include <iostream>

int main()
{
	float f, sh, p, new_pounds;
	std::cout << "Pounds: ";
	std::cin >> f;
	std::cout << "Shilings: ";
	std::cin >> sh;
	std::cout << "Penni: ";
	std::cin >> p;
	new_pounds = f + (sh / 20) + (p / 20 / 12);
	std::cout << "New pounds = J" << new_pounds;
}