#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL , "ru");
	int n = 2;
	int a;
	cout << "Введите своё число:" << endl;
	cin >> a;
	for (; n < a;) 
	{
		if (a % n == 0) 
		{
			cout << "Не простое";
			break;
		}
		n += 1;
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
