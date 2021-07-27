#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::setw(4) << 1990 << std::setw(10) << 135 << std::endl
		<< std::setw(4) << 1991 << std::setw(10) << 7290 << std::endl
		<< std::setw(4) << 1992 << std::setw(10) << 11300 << std::endl
		<< std::setw(4) << 1993 << std::setw(10) << 16200 << std::endl;
		return 0;
}