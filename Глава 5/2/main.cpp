#include <iostream>

double power(double& n, int p = 2);

int main()
{	
	double n;
	int p;
	std::cin >> n >> p;
	std::cout << power(n, p);
}

double power(double& n, int p)
{
	double s = n;
	for (int i = 0; i < (p - 1); i++)
	{
		n *= s;
	}
	return n;
}