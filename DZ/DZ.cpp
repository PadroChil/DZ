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
		if (num >= 100000 && num <= 999999)
		{
			break;
		}
		wer = num / 1000;
		tyr = num % 1000;

		sumwer = (wer % 100) + (wer % 10) + (wer % 1);
		sumtyr = (tyr % 100) + (tyr % 10) + (tyr % 1);

		if (sumwer = sumtyr)
		{
			std::cout << "\nСчаствилое число :)";
		}
		else
		{
			std::cout << "\nНе повезло :(";
		}
	}*/

	

	//Задача 2
	std::cout << "\nЗадача 2";

	int number;

    std::cout << "\nВведите четырехзначное число: ";
    std::cin >> number;

    if ( number >= 1000 && number <= 9999 || number <= -1000 && number >= -9999) 
	{
 
        int Number = number > 0 ? number : -number;

        int dig1 = Number / 1000;            
        int dig2 = (Number / 100) % 10;      
        int dig3 = (Number / 10) % 10;       
        int dig4 = Number % 10;               

        int newNumber = dig2 * 1000 + dig1 * 100 + dig4 * 10 + dig3;

        
        if (number < 0) 
		{
            newNumber = -newNumber;
        }

        std::cout << "\nРезультат: " << newNumber;
    } 
	else 
	{
		std::cout << "\nОшибка: введено не четырехзначное число.";
	}



	
	// Задача 3
	std::cout << "\nЗадача 3";
	
	int max; 
	int numm; 

	std::cout << "\nВведите 7 целых чисел: ";
	std::cin >> numm;
	max = numm;

	for (int i = 1; i < 7; ++i) {
		std::cin >> numm;

		if (numm > max) 
		{
			max = numm;
		}
	}

	std::cout << "\nСамое большое число: " << max;







}
