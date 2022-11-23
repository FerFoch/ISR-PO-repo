// 3.7.cpp : Этот файл содержит функцию "main".Здесь начинается и заканчивается выполнение программы.
// Следующая страница по сумме номеров предыдущих

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	double c, k;
	cout << "Введите сумму" << endl;
	cin >> c;
	k = (sqrt(1 + c * 8) - 1) / 2;
	if (long(k) == k)
		cout << "Следующая страница - " << k + 1 << endl;
	else
		cout << "Ошибка";

	return 0;
}