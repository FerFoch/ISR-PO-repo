// 3.7.cpp : ���� ���� �������� ������� "main".����� ���������� � ������������� ���������� ���������.
// ��������� �������� �� ����� ������� ����������

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	double c, k;
	cout << "������� �����" << endl;
	cin >> c;
	k = (sqrt(1 + c * 8) - 1) / 2;
	if (long(k) == k)
		cout << "��������� �������� - " << k + 1 << endl;
	else
		cout << "������";

	return 0;
}