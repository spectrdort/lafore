#include <iostream>
#include <conio.h>

int main()
{
	int ch = 2;
	float z;
	std::cout << "1 for Far, 2 for C ";
	ch = _getche();
	switch (ch)
	{
	case '1': 
		std::cout << "\nEnter Far: ";
		std::cin >> z;
		std::cout << "\nIn C: " << (z * 9 / 5) + 32;
		break;
	case '2':
		std::cout << "\nEnter C: ";
		std::cin >> z;
		std::cout << "\nIn Far: " << (z - 32) * 5 / 9;
	}

}