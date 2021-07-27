#include <iostream>

int main()
{
	float funt = 1.487, frank = 0.172, marka = 0.584, yena = 0.00955, dollaar, funt_n, frank_n, marka_n, yena_n;
	std::cin >> dollaar;
	funt_n = dollaar * funt;
	frank_n = dollaar * frank;
	marka_n = dollaar * marka;
	yena_n = dollaar * yena;
	std::cout << funt_n << " " << frank_n << " " << marka_n << " " << yena_n;
}