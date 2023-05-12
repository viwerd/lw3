#include <iostream>
#include <limits>

using namespace std;

int main()
{
	setlocale(LC_ALL , "ru");
	int n = 1;
	int num;

	cout << "Введите своё число:";
	cin >> num;

	int factorial = num;
	for (; n != num;)
	{
		if (numeric_limits<int>::max() / factorial < (num - n))
		{
			cout << "Не могу обработать такое болшое число." << endl;
			return 0;
		}
		factorial = factorial * (num - n);
		n++;
	}
	cout << "Факториал числа: " << num << "! = " << factorial << endl;
	return 0;

}
