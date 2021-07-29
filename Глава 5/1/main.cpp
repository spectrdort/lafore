#include <iostream>
#include <conio.h>

int main()
{
	float circarea(float& rad);
	float rad;
	std::cin >> rad;
	std::cout << circarea(rad);
}

float circarea(float& rad)
{
	return 3.14159 * rad * rad;
}
