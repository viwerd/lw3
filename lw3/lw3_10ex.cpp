#include <iostream>
#include <limits>

using namespace std;

int main() 
{
	setlocale(LC_ALL , "ru");
	int counter = 1;
	int number;

	cout << "Введите своё число:" << endl;
	cin >> number;

	int factorial = number;
	for (; counter != number;) 
	{
		if (numeric_limits<int>::max() / factorial < (number - counter)) 
		{
			cout << "Слишком большое число" << endl;
			return 0;
		}
		factorial = factorial * (number - counter);
		counter++;
	}
	cout << "Факториал числа: " << number << "! равен " << factorial << endl;
	return 0;

}