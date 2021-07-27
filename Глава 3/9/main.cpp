#include <iostream>

int main()
{
	int chairs, guests, res = 1;
	std::cout << "Num of guests: "; std::cin >> guests;
	std::cout << "Num of chairs: "; std::cin >> chairs;
	for (int i = guests; i >= (chairs - 1); --i)
	{
		res *= i;
	}
	std::cout << "Result: " << res << std::endl;
}