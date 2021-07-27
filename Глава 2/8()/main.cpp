#include <iostream>
#include <iomanip>

int main()
{
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	std::cout << std::setw(9) << "Moscow" << std::setfill('.') << std::setw(12) << pop1 << std::endl
		<< std::setfill(' ') << std::setw(9) << "Saint" << std::setfill('.') << std::setw(12) << pop2;
}