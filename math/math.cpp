// math.cpp
// ����� ����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = x*x*x+2;
	// ����� 1: ������������ � ��������� ����
	if (x < 4)
	B = 5 * pow(x, 8) + pow(x, 6) - x * x + 3;
	if (4 <= x && x < 7)
		B = atan(fabs((x + 3) / 2.)) + 7 * x;
	if (x >= 7)
		B = log10(2 * x + exp(5 * x + 5));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
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
