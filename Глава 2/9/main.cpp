#include <iostream>

int main()
{
	int a, b, c, d, chis, del;
	char dummychar;
	std::cout << "Enter first drob' ";
	std::cin >> a >> dummychar >> b;
	std::cout << "Enter second drob' ";
	std::cin >> c >> dummychar >> d;
	chis = (a * d) + (b * c);
	del = b * d;
	std::cout << "Sum is " << chis << "/" << del;
}