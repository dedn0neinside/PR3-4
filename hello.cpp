#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "введите а ";
	cin >> a;
	cout << "введите b ";
	cin >> b;
	int sum = 0;
	int s[10], i;
	cout << "Массив: ";
	for (i = 0; i < 10; i++)
	{
		s[i] = rand() % 41 - 20;
		cout << s[i] << " ";
		if ((s[i] >= a) && (s[i] <= b) && (s[i] > 0) && (s[i] % 4 == 0))
		{
			sum = sum + s[i];
		}
	}
	cout << "сумма положительных элементов в промежутке равна " << sum;
}