// math.cpp
// Патюк Іван
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = x*x*x+2;
	// спосіб 1: розгалуження в скороченій формі
	if (x < 4)
	B = 5 * pow(x, 8) + pow(x, 6) - x * x + 3;
	if (4 <= x && x < 7)
		B = atan(fabs((x + 3) / 2.)) + 7 * x;
	if (x >= 7)
		B = log10(2 * x + exp(5 * x + 5));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 4)
		B = 5 * pow(x, 8) + pow(x, 6) - x * x + 3;
	else
		if (4 <= x && x < 7)
			B = atan((fabs(x + 3) / 2.)) + 7 * x;
		else
			B = log10(2 * x + exp(5 * x + 5));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
