#include <iostream>

int main()
{
	const int first = 10;
	std::cout << first << std::endl;
	int second, third;
	second = first + 10;
	std::cout << second << std::endl;
	third = --second;
	std::cout << third << std::endl;
}