#include <iostream>

class employee
{
private:
	int num;
	float cash;
public:
	employee(): num(0), cash(0.0)
	{

	}
	void add(int& n, float& c)
	{
		num = n;
		cash = c;
	}
	void print()
	{
		std::cout << "Num of employee: " << num << " Cash: " << cash << std::endl;
	}
};

void add_n(employee&, employee&, employee&);
void print_n(employee&, employee&, employee&);


int main()
{
	employee e1, e2, e3;
	add_n(e1, e2, e3);
	print_n(e1, e2, e3);
	return 0;
}

void add_n(employee& e1, employee& e2, employee& e3)
{
	for (int i = 0; i < 3; i++)
	{
		int n;
		float c;
		std::cout << "Enter num of emp: ";  std::cin >> n;
		std::cout << "Enter cash of emp: ";  std::cin >> c;
		switch (i)
		{
		case 0:
			e1.add(n, c);
			break;
		case 1:
			e2.add(n, c);
			break;
		case 2:
			e3.add(n, c);
			break;
		default:
			break;
		}
	}
}
void print_n(employee& e1, employee& e2, employee& e3)
{
	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:
			e1.print();
			break;
		case 1:
			e2.print();
			break;
		case 2:
			e3.print();
			break;
		default:
			break;
		}
	}
}
