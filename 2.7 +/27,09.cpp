
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");

    double x, y, z;
    cout << "Введите стороны треугольника" << endl;
    cin >> x >> y >> z;


    if (((x + y) > z) and ((x + z) > y) and ((y + z) > x)) {
        cout << "Треугольник существует" << endl;
    }
    else
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (x == y and x == z and z == y)
    {
        cout << "Равносторонний\n";
        cout << "остроугольный\n";
        return 0;
    }
    if (x == z || y == z || x == y)
    {
        cout << "Равнобедренный\n";
    }
    else
    {
        cout << "Разносторонний\n";
    }
    if ((x * x + y * y < z * z) || (y * y + z * z < x * x) || (x * x + z * z < y * y))
    {
        cout << "Тупоугольный\n";
        return 0;
    }
    if ((pow(z, 2) == pow(y, 2) + pow(x, 2)) || (pow(x, 2) == pow(y, 2) || pow(z, 2)) || (pow(y, 2) == pow(z, 2) + pow(x, 2))) {
        cout << "Прямоугольный\n";
        return 0;
    }
    else
    {
        cout << "Остроугольный\n";
    }
}
