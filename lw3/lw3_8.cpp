#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL , "ru");
	int n;
	int a;
	cout << "Введите своё число:" << endl;
	cin >> a;
	for (n = 2; n < a; n++)
	{
		if (a % n == 0)
		{
			cout << "Не простое";
			break;
		}
	}
	if (n == a)
	{
		cout << "Простое";
	}
	else if (a == 1)
	{
		cout << "Простое";
	}
	return 0;
}
