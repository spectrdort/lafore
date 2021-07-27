#include <iostream>
#include <conio.h>

int main()
{
	float x, y;
	char ch;
	do
	{
		std::cout << "Enter nums: ";
		std::cin >> x >> ch >> y;
		switch (ch)
		{
		case '+': x += y; break;
		case '-': x -= y; break;
		case '*': x *= y; break;
		case '/': x /= y; break;
		}
		std::cout << "Answer = " << x; "\nAnother one? (y/n) ";
		ch = _getche();
		std::cout << std::endl;
	} 
	while (ch == 'y');
}
