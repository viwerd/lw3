#include <iostream>
#include <limits> 

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    int counter = 1;
    int number;

    cout << "Введите число: ";
    cin >> number;

    int factorial = number;
    while (counter != number)
    {
        if (numeric_limits<int>::max() / factorial < (number - counter)) {
            cout << "Не могу обработать такое болшое число :(\n";
            return 0;
        }
        factorial = factorial * (number - counter);
        counter++;

    }

    cout << "Факториал числа: " << number << "! равен " << factorial << endl;
    return 0;
}