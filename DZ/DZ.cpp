#include <iostream>
#include <locale.h>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	//Задача 1
	/*std::cout << "Задача 1";

	int num, wer, tyr;
	int sumwer, sumtyr;

	while (true)
	{
		std::cout << "\nВведите шестизначное число  ";
		std::cin >> num;
		if (num < 100000)
		{
			break;
		}
		wer = num / 1000;
		tyr = num % 1000;

		sumwer = (wer % 100) + (wer % 10) + (wer % 1);
		sumtyr = (tyr % 100) + (tyr % 10) + (tyr % 1);

		if (sumwer = sumtyr)
		{
			std::cout << "Счаствилое число :)";
		}
		else
		{
			std::cout << "Не повезло :(";
		}
		

	}*/

	//Задача 2
	/*std::cout << "\nЗадача 2";

	int num;












	*/
	// Задача 3
	std::cout << "\nЗадача 3";
	
	int max;
	int num;
	int count = 0;
	std::cout << "\nВведите 7 чисел ";
	
	for (int i = 0; i < 7; i++)
	{
		std::cin >> num;
		if (num < 0)
		{
			break;
		}
		if (count == 0)
		{
			max == count;
		}
		else
		{
			if (num > max)
			{
				max == num;
			}
		}

	}
	std::cout << "Максимальное число " << max;
	







}
