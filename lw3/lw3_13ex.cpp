#include <iostream>

using namespace std;

int main() {
	int a, n;
	setlocale(LC_ALL, "ru");
	cout << "Введите число: " << endl;
	cin >> a;
	n = 2;
	
	do 
	{
		if (a % n == 0) 
		{
			if (a == 2) 
			{
				break;
			}
			cout << "Не простое";
			break;
		}
		n++;
	} while (n < a);
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