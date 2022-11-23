// 5.7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string FirstString;
    string SecondString;
    int a=0, b=0, c=0, d=0;
   
    cout << "Введите первое предложение:";
    getline(cin, FirstString);
    cout << "Введите второе предложение:";
    getline(cin, SecondString);

    string trimmedFirst;
    int countSpaceInTheEnd = 0;

    for (int i = FirstString.size() - 1; i > 0; i--)
    {
        if (FirstString[i] != ' ')
        {
            break;
        }
        countSpaceInTheEnd++;
    }
    for (int i = 0; i < FirstString.size() - countSpaceInTheEnd; i++)
    {
        trimmedFirst += FirstString[i];
    }

    string concatedString = trimmedFirst + " " + SecondString;
    string temp;
    string tempSecond;
    string outputString;
    bool toOut;
    
    cout << "Слова, которые встречаются в друх предложениях только 1 раз:";
    for (int i = 0; i < concatedString.size() + 1; i++)
    {
        if ((concatedString[i] == ' ') || (concatedString[i] == '\0'))
        {
            toOut = true;

            tempSecond = "";

            for (int j = 0; j < trimmedFirst.size() + 1; j++)
            {
                if ((trimmedFirst[j] == ' ') || (trimmedFirst[j] == '\0'))
                {
                    if ((temp == tempSecond) && (i != j))
                    {
                        toOut = false;

                        break;
                    }
                    tempSecond = "";
                    continue;
                }

                tempSecond += trimmedFirst[j];
            }

            tempSecond = "";

            for (int j = 0; j < SecondString.size() + 1; j++)
            {
                if ((SecondString[j] == ' ') || (SecondString[j] == '\0'))
                {
                    if ((temp == tempSecond) && (i != j + trimmedFirst.size() + 1))
                    {
                        toOut = false;

                        break;
                    }
                    tempSecond = "";
                    continue;
                }
                tempSecond += SecondString[j];
            }
            if (toOut)
            {
                outputString += (temp + ", ");
            }
            temp = "";
            continue;
        }
        temp += concatedString[i];
    }
    for (int i = 0; i < outputString.size() - 2; i++)
    {
        cout << outputString[i];
    }
}