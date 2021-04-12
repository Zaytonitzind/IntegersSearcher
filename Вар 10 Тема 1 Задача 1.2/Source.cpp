#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

void numberDivisible(int threshold) 
{
	for (int number = 1; number <= threshold; number++)
	{
		string const numeralArray = to_string(number);
		bool check = false;
		for (int checkNum = 0; checkNum < numeralArray.size(); checkNum++)
		{
			if (numeralArray[checkNum] - '0' != 0 && number % (numeralArray[checkNum] - '0') == 0)//условие проверки, что цифра не равна 0 и число делится нацело
			{
				check = true;
				continue;
			}
			else {
				check = false;
				break;
			}
		}
		if (check == true)
			cout << number << endl;
	}
}

int main() 
{
	setlocale(LC_ALL, "rus");
	int threshold;
	do {
		
		cout << "Введите значения N, для нахождения всех чисел, которые делятся на каждую из своих цифр: ";
		cin >> threshold; //Пороговое число
		system("cls");
		if (threshold <= 0)
			cout << "Число должно быть больше 0"<<endl;
	} while (threshold <= 0);
	system("cls");
	numberDivisible(threshold);

	system("pause");
	return 0;
}