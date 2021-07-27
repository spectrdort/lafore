#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::setiosflags(std::ios::left) 
		<< std::setw(12) << "Last name"
		<< std::setw(12) << "First name"
		<< std::setw(20) << "Adress"
		<< std::setw(20) << "Town"
		<< std::endl
		<< std::setfill('-') << std::setw(64) << "-"
		<< std::setfill(' ') << std::endl
		<< std::setw(12) << "Petrov"
		<< std::setw(12) << "Vasiliy"
		<< std::setw(20) << "Klenovaya 16"
		<< std::setw(20) << "Saints-Petersburg"
		<< std::endl
		<< std::setw(12) << "Ivanov"
		<< std::setw(12) << "Sergey"
		<< std::setw(20) << "Osinavaya 3"
		<< std::setw(20) << "Founders";
}