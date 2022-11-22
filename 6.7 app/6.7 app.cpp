#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

#define h s.find_last_not_of("0123456789")


using namespace std;

int main()
{
    srand(time(0));
    string s;
    int n;
    do {
        cout << "Enter marix size ";
        getline(cin, s);                        //Указание размера массива
        n = atoi(s.c_str());
    } while (h != -1 or n == 0);

    if (n == 0) {
        cout << "Matrix is empty ";             //Существует ли массив указанного размера
        return 0;
    }
    int max = 0;
    int maxPosX = 0;
    int maxPosY = 0;
    int n2 = n - 1;
    int** arr = new int* [n];                   //массивы указателей
    int** arr2 = new int* [n2];                //


    for (int i = 0; i < n; i++)                 //создание массивов
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = new int[n2];
    }


    for (int i = 0; i < n; i++)                 //заполнение массивов
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 50 + rand() % 50;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";           //массив
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                maxPosX = i;
                maxPosY = j;
            }
        }
    }

    cout << endl;


    for (int i = 0; i < n; i++)
    {
        if (i == maxPosX) continue;
        for (int j = 0; j < n; j++)
        {
            if (j == maxPosY) continue;
            int bufi = i;
            int bufj = j;
            if (bufi > maxPosX) bufi--;
            if (bufj > maxPosY) bufj--;
            arr2[bufi][bufj] = arr[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << arr2[i][j] << " ";          //массив 2
        }
        cout << endl;
    }


    //удаление массивов
    for (int i = 0; i < n; i++)
    {
        delete[]arr[i];             // удаляется содержимое
    }
    delete[]arr;                   // удаляется массив
    for (int i = 0; i < n2; i++)
    {
        delete[]arr2[i];
    }
    delete[]arr2;
}