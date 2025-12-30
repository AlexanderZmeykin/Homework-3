#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int equality = 0;
	int a = 0;
	int a_copy = 0;
	int b = 0;
	int b_copy = 0;
	std::string result;

	std::cout << "Введите первое число:" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> b;

	a_copy = a;
	b_copy = b;

	if ((a >= 100) || (a <= (-100)) || (b >= 100) || (b <= (-100)))
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
	}
	else
	{
		if (a < 0)
		{
			result.append("минус ");
			a *= -1;
		}
		if (a / 10 == 1)
		{
			if (a % 10 == 0)
			{
				result.append("десять ");
			}
			if (a % 10 == 1)
			{
				result.append("одиннадцать ");
			}
			if (a % 10 == 2)
			{
				result.append("двенадцать ");
			}
			if (a % 10 == 3)
			{
				result.append("тринадцать ");
			}
			if (a % 10 == 4)
			{
				result.append("четырнадцать ");
			}
			if (a % 10 == 5)
			{
				result.append("пятнадцать ");
			}
			if (a % 10 == 6)
			{
				result.append("шестнадцать ");
			}
			if (a % 10 == 7)
			{
				result.append("семнадцать ");
			}
			if (a % 10 == 8)
			{
				result.append("восемнадцать ");
			}
			if (a % 10 == 9)
			{
				result.append("девятнадцать ");
			}
		}
		else
		{
			if (a / 10 == 2)
			{
				result.append("двадцать ");
			}
			if (a / 10 == 3)
			{
				result.append("тридцать ");
			}
			if (a / 10 == 4)
			{
				result.append("сорок ");
			}
			if (a / 10 == 5)
			{
				result.append("пятьдесят ");
			}
			if (a / 10 == 6)
			{
				result.append("шестьдесят ");
			}
			if (a / 10 == 7)
			{
				result.append("семдесят ");
			}
			if (a / 10 == 8)
			{
				result.append("восемдесят ");
			}
			if (a / 10 == 9)
			{
				result.append("девяносто ");
			}
			if (a % 10 == 1)
			{
				result.append("один ");
			}
			if (a % 10 == 2)
			{
				result.append("два ");
			}
			if (a % 10 == 3)
			{
				result.append("три ");
			}
			if (a % 10 == 4)
			{
				result.append("четыре ");
			}
			if (a % 10 == 5)
			{
				result.append("пять ");
			}
			if (a % 10 == 6)
			{
				result.append("шесть ");
			}
			if (a % 10 == 7)
			{
				result.append("семь ");
			}
			if (a % 10 == 8)
			{
				result.append("восемь ");
			}
			if (a % 10 == 9)
			{
				result.append("девять ");
			}
		}
		a_copy > b_copy ? result.append("больше чем ")
			: (a_copy == b_copy ? result.append("равно ") : result.append("меньше чем "));
		if (b < 0)
		{
			result.append("минус ");
			b *= -1;
		}
		if (b / 10 == 1)
		{
			if (b % 10 == 0)
			{
				result.append("десять ");
			}
			if (b % 10 == 1)
			{
				result.append("одиннадцать ");
			}
			if (b % 10 == 2)
			{
				result.append("двенадцать ");
			}
			if (b % 10 == 3)
			{
				result.append("тринадцать ");
			}
			if (b % 10 == 4)
			{
				result.append("четырнадцать ");
			}
			if (b % 10 == 5)
			{
				result.append("пятнадцать ");
			}
			if (b % 10 == 6)
			{
				result.append("шестнадцать ");
			}
			if (b % 10 == 7)
			{
				result.append("семнадцать ");
			}
			if (b % 10 == 8)
			{
				result.append("восемнадцать ");
			}
			if (b % 10 == 9)
			{
				result.append("девятнадцать ");
			}
		}
		else
		{
			if (b / 10 == 2)
			{
				result.append("двадцать ");
			}
			if (b / 10 == 3)
			{
				result.append("тридцать ");
			}
			if (b / 10 == 4)
			{
				result.append("сорок ");
			}
			if (b / 10 == 5)
			{
				result.append("пятьдесят ");
			}
			if (b / 10 == 6)
			{
				result.append("шестьдесят ");
			}
			if (b / 10 == 7)
			{
				result.append("семдесят ");
			}
			if (b / 10 == 8)
			{
				result.append("восемдесят ");
			}
			if (b / 10 == 9)
			{
				result.append("девяносто ");
			}
			if (b % 10 == 1)
			{
				result.append("один ");
			}
			if (b % 10 == 2)
			{
				result.append("два ");
			}
			if (b % 10 == 3)
			{
				result.append("три ");
			}
			if (b % 10 == 4)
			{
				result.append("четыре ");
			}
			if (b % 10 == 5)
			{
				result.append("пять ");
			}
			if (b % 10 == 6)
			{
				result.append("шесть ");
			}
			if (b % 10 == 7)
			{
				result.append("семь ");
			}
			if (b % 10 == 8)
			{
				result.append("восемь ");
			}
			if (b % 10 == 9)
			{
				result.append("девять ");
			}
		}
	}
	std::cout << result << std::endl;
	return 0;
}