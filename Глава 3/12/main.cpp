#include <iostream>
#include <conio.h>

int main()
{
	int a, b, c, d;
	char dch, ch;
	do
	{
		std::cout << "First: "; std::cin >> a >> dch >> b;
		std::cout << "Sighn (+,-,*,/): "; std::cin >> ch;
		std::cout << "Second: "; std::cin >> c >> dch >> d;
		switch (ch)
		{
		case '+':
			a = (a * d) + (b * c);
			b *= d;
			break;
		case '-':
			a = (a * d) - (b * c);
			b *= d;
			break;
		case '*':
			a *= c;
			b *= d;
			break;
		case '/':
			a *= d;
			b *= c;
			break;
		}
		std::cout << "Result: " << a << dch << b << "\nAnother one? (y/n) ";
		ch = _getche();
		std::cout << std::endl;
	} while (ch == 'y');
}