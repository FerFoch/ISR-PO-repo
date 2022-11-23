#include <iostream>
#include <math.h>
#define formula (((3*i)-1)/(7*(i*i)+9))
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    int n;
    double E, sum = 0;
    do
    {
        cout << "Введите n" << endl;
        cin >> n;
    } while (n <= 0);
    for (double i = 1; i <= n; i++)
    {
        sum += formula;
    }
    cout << "Сумма " << n << " Элементов= " << sum << endl;
    do
    {
        cout << "Введите E" << endl;
        cin >> E;
    } while (E <= 0);
    for (double i = 1; abs(formula) >= E; i++)
    {
        cout << "A[" << i << "]= " << formula << endl;
    }
}