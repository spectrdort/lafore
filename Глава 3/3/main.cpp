#include <iostream>
#include <conio.h>

int main()
{
	int x = 1, y = 0;
	std::cout << "x = ";
	for (int i = 100000; i >= 1;)
	{
		x = _getche() - 48;
		y += x * i;
		i /= 10;
	}
	std::cout << "\ny = " << y;
}