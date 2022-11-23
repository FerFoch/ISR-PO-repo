/*
7.7    Дано натуральное число n. Среди чисел 1, 2, ... , n найти все те, которые можно представить в виде суммы квадратов двух натуральных чисел,
определив функцию, позволяющую распознавать полные квадраты.

Замечание. Использовать механизм формальных параметров
*/

#include <iostream>  
#include <cmath>  
#include <string>  
using namespace std;

/*
int Num(double Check)
{
    int Raz = 0;
    
    Raz = sqrt(Check); //                                    У Raz тип int и при присваивании она получит значение корня без чисел после запятой

    if ((sqrt(Check) - Raz) == 0) return 1;//               Если разность равна нулю то число целое

    else return 0;
}
*/

void PerfectSquare(int n)
{
    int R = sqrt(n);
    float res = (sqrt(n) - R);
    if (res == 0.0) cout << " - полный квадрат";
}

void SumCheck(int n, void(perfect)(int))
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= i; k++)
            {
                if (j * j + k * k == i)
                {
                    cout << i; perfect(i);
                    cout << endl;
                    goto exit;
                }
            }
        }
    exit:;
    }
}



int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    string str;
    do {
        cout << "Введите N: "; getline(cin, str);
        const char* N = str.c_str();
        n = atoi(N);
    } while (n <= 0);

    SumCheck(n, PerfectSquare);

    
    system("pause");
    
    return 0;
}