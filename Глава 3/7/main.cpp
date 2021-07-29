#include <iostream>

int main()
{
	float v, y, per;
	std::cout << "Before: "; std::cin >> v;
	std::cout << "\nYears: "; std::cin >> y;
	std::cout << "\n%: "; std::cin >> per;
	for (int i = 0; i < y; i++)
	{
		v *= ((per + 100) / 100);
	}
	//std::cout.precision(1);
	std::cout <<  "\nAfter: " << v;
}