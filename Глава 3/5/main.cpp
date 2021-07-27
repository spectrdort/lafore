#include <iostream>

int main()
{
	int x;
	std::cout << "Kolichestvvo strok: ";
	std::cin >> x;
	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < (x * 2); i++)
		{
			char ch = i >= x - j && i <= x + j ? 'X' : ' ';
			std::cout << ch;
		}
		std::cout << std::endl;
	}
}