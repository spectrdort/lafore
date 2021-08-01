#include <iostream>
#include <conio.h>

class angle
{
public:
	int grad;
	float min;
	char nap;
public:
	angle(): grad(0), min(0.0), nap('E')
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
				for (; s != ' ' && i < 4; i++)
				{
					s = _getch();
					if (s == '.')
					{
						s_f(s, i, n1, n2, n3);
						s = _getch();
						m = static_cast<float>(s_f(s, i, n1, n2, n3)) / 10;
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
		std::cout << 1;
		return angle::s_s(s, i, n1, n2, n3);
	case '2':
		std::cout << 2;
		return angle::s_s(s, i, n1, n2, n3);
	case '3':
		std::cout << 3;
		return angle::s_s(s, i, n1, n2, n3);
	case '4':
		std::cout << 4;
		return angle::s_s(s, i, n1, n2, n3);
	case '5':
		std::cout << 5;
		return angle::s_s(s, i, n1, n2, n3);
	case '6':
		std::cout << 6;
		return angle::s_s(s, i, n1, n2, n3);
	case '7':
		std::cout << 7;
		return angle::s_s(s, i, n1, n2, n3);
	case '8':
		std::cout << 8;
		return angle::s_s(s, i, n1, n2, n3);
	case '9':
		std::cout << 9;
		return angle::s_s(s, i, n1, n2, n3);
	case '0':
		std::cout << 0;
		return angle::s_s(s, i, n1, n2, n3);
	case 'g':
		std::cout << "\xF8";
		break;
	case 'm':
		std::cout << "'";
		break;
	case '.':
		std::cout << ".";
		break;
	case ' ':
		std::cout << ' ';
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
		return n3 += (s - 48) + (n1 * 100) + ((n2- (n1*10)) * 10);
	}
}

char angle::s_t(const char& s)
{
	switch (s)
	{
	case 'N':
		std::cout << 'N';
		return s;
	case 'S':
		std::cout << 'S';
		return s;
	case 'W':
		std::cout << 'W';
		return s;
	case 'E':
		std::cout << 'E';
		return s;
	default:
		break;
	}
	return s;
}
