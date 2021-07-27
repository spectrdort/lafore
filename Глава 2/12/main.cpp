#include <iostream>

int main()
{
	int pounds, shillings, penny;
	float new_pounds, new_shillings, new_penny;
	std::cout << "New form = J";
	std::cin >> new_pounds;
	pounds = static_cast<int>(new_pounds);
	new_shillings = (new_pounds - pounds) * 20;
	shillings = static_cast<int>(new_shillings);
	new_penny = (new_shillings - shillings) * 12;
	penny = static_cast<int>(new_penny);
	std::cout << "Old = J" << pounds << '.' << shillings << '.' << penny;
}