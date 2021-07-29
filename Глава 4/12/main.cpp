#include <iostream>

struct fraction
{
	int c;
	int z;
};

int main()
{
	fraction f1, f2, f3;
	char ch, dch;
	do
	{
		std::cout << "Enter first fraction:"; std::cin >> f1.c >> dch >> f1.z;
		std::cout << "Enter znak: (+,-,*,/)"; std::cin >> ch;
		std::cout << "Enter second fraction:"; std::cin >> f2.c >> dch >> f2.z;
		switch (ch)
		{
		case '+':
			f3.c = (f1.c * f2.z) + (f1.z * f2.c);
			f3.z = f1.z * f2.z;
			break;
		case '-':
			f3.c = (f1.c * f2.z) - (f1.z * f2.c);
			f3.z = f1.z * f2.z;
			break;
		case '*':
			f3.c = f1.c * f2.c;
			f3.z = f1.z * f2.z;
			break;
		case '/':
			f3.c = f1.c * f2.z;
			f3.z = f1.z * f2.c;
			break;
		default:
			break;
		}
		std::cout << "Result is: " << f3.c << dch << f3.z << std::endl;
		std::cout << "Another one? (y/n) "; std::cin >> ch;
		std::cout << std::endl;
	} while (ch == 'y');
}