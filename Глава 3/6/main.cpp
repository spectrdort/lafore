#include <iostream>
#include <conio.h>

int main()
{
	unsigned int numb, ch;
	unsigned long fact = 1;
	do
	{
		std::cout << "Ent numb ";
		std::cin >> numb;
		for (int i = numb; i > 0; i--)
		{
			fact *= i;
		}
		std::cout << "Fact = " << fact << std::endl;
		fact = 1;
		std::cout << "Another one (1/0) ";
		ch = _getche() - 48;
		std::cout << std::endl;
	} while (ch != 0);
	return 0;
}