#include <iostream>
#include <conio.h>

class angle
{
public:
	int grad;
	float min;
	char nap;
public:
	angle() : grad(0), min(0.0), nap('E')
	{

	}
	angle(int g, float m, char n) : grad(g), min(m), nap(n)
	{

	}

	void getcoor()
	{
		char s = 'a';
		int n;
		float m;
		std::cout << "Please enter coordinates: ";
		for (int i = 0, n1 = 0, n2 = 0, n3 = 0; i < 4; i++)
		{
			s = _getch();
			if (s == 'g')
			{
				s_f(s, i, n1, n2, n3);
				i = n1 = n2 = n3 = 0;
				for (; s != ' ' && i < 5; i++)
				{
					s = _getch();
					if (s == '.')
					{
						s_f(s, i, n1, n2, n3);
						s = _getch();
						m = static_cast<float>(s_f(s, i, n1, n2, n3)) / 10;
						s = _getch();
						s_f(s, i, n1, n2, n3);
						s = _getch();
						s_f(s, i, n1, n2, n3);
						break;
					}
					else if (s == ' ')
					{
						s_f(s, i, n1, n2, n3);
						break;
					}
					else if (s == 'm')
					{
						s_f(s, i, n1, n2, n3);
					}
					else
					{
						m = static_cast<float>(s_f(s, i, n1, n2, n3));
					}
				}
				s = _getch();
				nap = s_t(s);
				break;
			}
			else
			{
				n = s_f(s, i, n1, n2, n3);
			}
		}
		grad = n; min = m;
		std::cout << std::endl;
	}
	void showcoor()
	{
		std::cout << grad << "\xF8" << min << "' " << nap << std::endl;
	}

	int s_f(const char&, const int&, int&, int&, int&);
	int s_s(const char&, const int&, int&, int&, int&);
	char s_t(const char&);


};

int main()
{
	angle first(150, 23.6, 'E'), second;
	first.showcoor();
	char c;
	do
	{
		second.getcoor();
		second.showcoor();
		std::cout << "Another one? (y/n) ";
		c = _getche();
		std::cout << std::endl;
	} while (c != 'n');
}

int angle::s_f(const char& s, const int& i, int& n1, int& n2, int& n3)
{
	switch (s)
	{
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '0':
		std::cout << s;
		return angle::s_s(s, i, n1, n2, n3);
	case 'g':
		std::cout << "\xF8";
		break;
	case 'm':
		std::cout << "'";
		break;
	case '.':
	case ' ':
		std::cout << s;
		break;
	default:
		break;
	}
}

int  angle::s_s(const char& s, const int& i, int& n1, int& n2, int& n3)
{
	switch (i)
	{
	case 0:
		return n1 += (s - 48);
	case 1:
		return n2 += (s - 48) + (n1 * 10);
	case 2:
		return n3 += (s - 48) + (n1 * 100) + ((n2 - (n1 * 10)) * 10);
	}
}

char angle::s_t(const char& s)
{
	switch (s)
	{
	case 'N':
	case 'S':
	case 'W':
	case 'E':
		std::cout << s;
		return s;
	default:
		break;
	}
	return s;
}