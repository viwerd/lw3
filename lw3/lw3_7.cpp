#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i <= 100;)
	{
		sum += i;
		i++;
		if (i == 101)
		{
			break;
		}
	}
	cout << sum;
	return 0;
}
