#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string Gender;
	std::string Zodiac;
	int Age;

	std::cout << "Пол(М или Ж):" << std::endl;
	std::cin >> Gender;
	std::cout << "Знак зодиака:" << std::endl;
	std::cin >> Zodiac;
	std::cout << "Возраст:" << std::endl;
	std::cin >> Age;

	if ((Gender == "м") || (Gender == "М")) 
	{
		if ((Zodiac == "Рак") || (Zodiac == "рак") || (Zodiac == "Скорпион") || (Zodiac == "скорпион") || (Zodiac == "Рыбы") || (Zodiac == "рыбы"))
		{
			if (Age <= 39)
			{
				std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
			}
			else
			{
				std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
			}
		}
		else
		{
			std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
		}
	}
	else if ((Gender == "ж") || (Gender == "Ж"))
	{
			if ((Zodiac == "Козерог") || (Zodiac == "козерог") || (Zodiac == "Телец") || (Zodiac == "телец") || (Zodiac == "Дева") || (Zodiac == "дева"))
			{
				if ((Age >= 15) && (Age <= 30))
				{
					std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. \nБудет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
				}
				else
				{
					std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
				}
			}
			else
			{
				std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
			}

	}
	return 0;
}