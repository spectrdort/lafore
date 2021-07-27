#include <iostream>
#include <conio.h>

int main()
{	
	char ch, dch;
	do
	{
		int p, p1 = 0, s, s1 = 0, f, f1 = 0, um;
		std::cout << "First: "; std::cin >> p >> dch >> s >> dch >> f;
		std::cout << "+\-\*: "; std::cin >> ch;
		switch (ch)
		{
		case '+':
			std::cout << "Second: "; std::cin >> p1 >> dch >> s1 >> dch >> f1;
			f += f1;
			if (f > 11)
				s++;
			s += s1;
			if (s > 19)
				p++;
			p += p1;
			break;
		case '-':
			std::cout << "Second: "; std::cin >> p1 >> dch >> s1 >> dch >> f1;
			p -= p1;
			if (s < s1)
			{
				p--;
				s += 20 - s1;
			}
			else
				s -= s1;
			if (f < f1)
			{
				s--;
				f += 12 - f1;
			}
			else
				f -= f1;
			break;
		case '*':
			std::cout << "Int num: ";  std::cin >> um;
			f *= um;
			while (f > 11)
			{
				f -= 12;
				s1++;
			}
			s *= um;
			while (s > 19)
			{
				s -= 20;
				p1++;
			}
			s += s1;
			if (s > 19)
			{
				s -= 20;
				p1++;
			}
			p *= um;
			p += p1;
		}
		std::cout << "Result: " << p << dch << s << dch << f << "\nAnother one (y/n) ";
		dch = _getche();
		std::cout << std::endl;
	} while (dch == 'y');
}