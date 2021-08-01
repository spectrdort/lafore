#include <iostream>
#include <conio.h>

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
		grad = read_num_grad();
		min = read_num_min();
		nap = read_nap();
		std::cout << std::endl;
	}
	void showcoor()
	{
		std::cout << grad << "\xF8" << min << "' " << nap << std::endl;
	}

	//функции
	int read_num_grad();
	float read_num_min();
	char read_nap();

	//проверки
	bool proof_grad(const char&);
	bool proof_min(const char&);
	bool proof_nap(const char&);



};


int main()
{
	angle first(12,12.6,'N'), second;
	first.showcoor();
	second.getcoor();
	second.showcoor();
}

int angle::read_num_grad()
{
	char c = 'a';
	int n;
	for (int i = 0; c != 'g' || i < 3; i++)
	{
		c = _getch();
		if (proof_grad(c) == true)
		{
			if (c != 'g')
			{
				switch (i)
				{
				case 0:
					std::cout << c;
					n = c - 48;
					break;
				case 1:
					std::cout << c;
					n = ((c - 48) + (n * 10));
					break;
				case 2:
					std::cout << c;
					n = ((n * 10) + (c - 48));
					break;
				default:
					break;
				}
			}
			else
			{
				break;
			}
		}
		else
		{
			i--;
		}
	}
	std::cout << '\xF8';
	return n;
}

float angle::read_num_min()
{
	char c = 'a';
	float n, m;
	for (int i = 0; c != 'm' ; i++)
	{
		c = _getch();
		if (proof_min(c) == true)
		{
			if (c == '.')
			{
				i = 2;
			}
			if (c != 'm')
			{
				switch (i)
				{
				case 0:
					std::cout << c;
					n = c - 48;
					break;
				case 1:
					std::cout << c;
					n = ((c - 48) + (n * 10));
					break;
				case 2:
					std::cout << '.';
					break;
				case 3:
					std::cout << c;
					m = c - 48;
					m /= 10;
					n += m;
					break;
				default:
					break;
				}
			}
			else
			{
				break;
			}
		}
		else
		{
			i--;
		}
	}
	std::cout << "'";
	return n;
}

char angle::read_nap()
{
	char c = 'a', n;
	for (int i = 0; c != '\r'; i++)
	{
		c = _getch();
		if (proof_nap(c) == true)
		{
			switch (i)
			{
			case 0:
				std::cout << ' ';
				break;
			case 1:
				n = c;
				std::cout << c;
				break;
			default:
				break;
			}
		}
		else
		{
			i--;
		}
	}
	return n;
}

bool angle::proof_grad(const char& c)
{
	if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0' || c == 'g')
		return true;
	else
		return false;
}

bool angle::proof_min(const char& c)
{
	if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0' || c == '.' || c == 'm')
		return true;
	else
		return false;
}

bool angle::proof_nap(const char& c)
{
	if (c == ' ' || c == 'N' || c == 'S' || c == 'W' || c == 'E')
		return true;
	else
		return false;
}