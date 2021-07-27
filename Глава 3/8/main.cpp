#include <iostream>
#include <conio.h>

int main()
{
	int p, s, f, p1, s1, f1;
	char ch;
	do
	{
		std::cout << "First: J"; std::cin >> p >> ch >> s >> ch >> f;
		std::cout << "Second: J"; std::cin >> p1 >> ch >> s1 >> ch >> f1;
		p += p1; s += s1; f += f1;
		if (f > 11)
		{
			f -= 12;
			s++;
		}
		if (s > 19)
		{
			s -= 20;
			p++;
		}
		std::cout << "Result: J" << p << '.' << s << '.' << f << "\nAnother one ? (y/n) ";
		ch = _getche();
		std::cout << std::endl;
	} while (ch == 'y');
}