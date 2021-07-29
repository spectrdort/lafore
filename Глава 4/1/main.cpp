#include <iostream>

struct phone
{
	int first;
	int second;
	int third;
};

int main()
{
	phone mine{ 212, 767, 8900 };
	phone yours;
	std::cout << "Int ur num: "; std::cin >> yours.first >> yours.second >> yours.third;
	std::cout << "My num: (" << mine.first << ") " << mine.second << "-" << mine.third << std::endl;
	std::cout << "Ur num: (" << yours.first << ") " << yours.second << "-" << yours.third << std::endl;
}