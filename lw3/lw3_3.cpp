#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    int num;
    int n = 2;
    cout << "Введите число:";
    cin >> num;

    while (n < num)
    {
        if (num % n == 0)
        {
            cout << "Число не простое";
            break;
        }
        n += 1;
    }
    if (n == num)
    {
        cout << "Число простое";
    }
    return 0;
}
