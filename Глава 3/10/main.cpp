#include <iostream>

int main()
{
	int years = 0;
	float before, percent, after;
	std::cout << "Before: "; std::cin >> before;
	std::cout << "After: "; std::cin >> after;
	std::cout << "Percent: "; std::cin >> percent;

	do
	{
		before *= ((percent + 100) / 100);
		years++;
	} while (before < after);
	years++;
	std::cout << "Years: " << years;

}