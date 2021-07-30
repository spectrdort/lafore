#include <iostream>
#include <iomanip>

class date
{
private:
	int day;
	int month;
	int year;

public:
	date() : day(0), month(0), year(0)
	{

	}
	void getdate()
	{
		std::cout << "Please enter date in d/m/y: ";
		int d, m, y;
		char c;
		std::cin >> d >> c >> m >> c >> y;
		day = d; month = m; year = y;
	}
	void showdate()
	{
		char c = '/';
		std::cout << "Date: " << day << c << month << c << year << std::endl;
	}
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

void print_prof(etype&);

class employee
{
private:
	int num;
	float cash;
	date today;
	etype prof;
public:
	employee() : num(0), cash(0.0)
	{

	}
	void add(int& n, float& c, date& t, etype& p)
	{
		num = n;
		cash = c;
		today = t;
		prof = p;
	}
	void print()
	{
		std::cout << "Num of employee: " << num << std::endl << "Cash: " << cash << std::endl; 
		today.showdate(); 
		print_prof(prof); 
		std::cout << std::endl;
	}
};

void add_n(employee&, employee&, employee&);
void print_n(employee&, employee&, employee&);
void add_p(char&, etype&);

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
		date t;
		etype p;
		char ch;
		std::cout << "Enter num of emp: ";  std::cin >> n;
		std::cout << "Enter cash of emp: ";  std::cin >> c;
		t.getdate();
		std::cout << "Enter prof of emp(a,e,l,m,r,s): "; std::cin >> ch;
		add_p(ch, p);
		switch (i)
		{
		case 0:
			e1.add(n, c, t, p);
			break;
		case 1:
			e2.add(n, c, t, p);
			break;
		case 2:
			e3.add(n, c, t, p);
			break;
		default:
			break;
		}
		std::cout << std::endl;
	}
	std::cout << std::setw(35) << std::setfill('=') << '=' << std::endl << std::endl;
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

void add_p(char& ch, etype& prof)
{
	switch (ch)
	{
	case 'a':
		prof = accountant;
		break;
	case 'e':
		prof = executive;
		break;
	case 'l':
		prof = laborer;
		break;
	case 'm':
		prof = manager;
		break;
	case 'r':
		prof = researcher;
		break;
	case 's':
		prof = secretary;
		break;
	default:
		break;
	}
}

void print_prof(etype& prof)
{
	std::cout << "Prof is: ";
	switch (prof)
	{
	case etype::accountant:
		std::cout << "accountant";
		break;
	case etype::executive:
		std::cout << "executive";
		break;
	case etype::laborer:
		std::cout << "laborer";
		break;
	case etype::manager:
		std::cout << "manager";
		break;
	case etype::researcher:
		std::cout << "researcher";
		break;
	case etype::secretary:
		std::cout << "secretary";
		break;
	default:
		break;
	}
	std::cout << std::endl;
}