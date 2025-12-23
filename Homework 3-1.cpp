#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	bool a = true, b = false;
	std::cout << std::boolalpha;
	std::cout << "Оператор: ||\n" << a << " " << a << " " << (a || a);
	std::cout << "\n" << a << " " << b << " " << (a || b);
	std::cout << "\n" << b << " " << a << " " << (b || a);
	std::cout << "\n" << b << " " << b << " " << (b || b);
	std::cout << "\n" << "Оператор: &&\n" << a << " " << a << " " << (a && a);
	std::cout << "\n" << a << " " << b << " " << (a && b);
	std::cout << "\n" << b << " " << a << " " << (b && a);
	std::cout << "\n" << b << " " << b << " " << (b && b);
	return 0;
}