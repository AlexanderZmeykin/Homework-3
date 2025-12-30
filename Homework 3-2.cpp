#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	std::cout << "Первое число:" << std::endl;
	std::cin >> a;
	std::cout << "Второе число:" << std::endl;
	std::cin >> b;
	std::cout << "Третье число:" << std::endl;
	std::cin >> c;
	int result_1 = a > b ? 
		(a > c ? a : c) 
		: (b > c ? b : c);
	int result_2 = result_1 == a ? 
		(b > c ? b : c) 
		: (result_1 == b ? 
			(a > c ? a : c) 
			: (b > a ? b : a));
	int result_3 = (result_1 == a) ? 
		(result_2 == b ? c : b) 
		: (result_1 == b ? 
			(result_2 == a ? c : a) 
			: (result_2 == a ? b : a));
	std::cout << "Результат:" << result_1 << result_2 << result_3 << std::endl;
}