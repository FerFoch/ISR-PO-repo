// 5.7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string sentence;
    cout << "Введите предложение:";
    getline(cin, sentence);
    string trimmedSentence;
    int countSpaceInTheEnd = 0;

    for (int i = sentence.size() - 1; i > 0; i--)
    {
        if (sentence[i] != ' ')
        {
            break;
        }
        countSpaceInTheEnd++;
    }

    for (int i = 0; i < sentence.size() - countSpaceInTheEnd; i++)
        trimmedSentence += sentence[i];
    
    int totalCount = 0;
    int countToCompare = 0;
    int distanceOfWord = 0;
    char popularChar;
    char charToCompare;
    string tempString;

    for (int i = 0; i < trimmedSentence.size(); i++)
    {
        if (trimmedSentence[i] == ' ')
        {
            charToCompare = trimmedSentence[i - distanceOfWord];
            if ((trimmedSentence[0] == charToCompare) && (i - distanceOfWord != 0)) // first word
            {
                countToCompare++;
            }
            for (int j = 0; j < trimmedSentence.size(); j++)
            {
                if ((trimmedSentence[j] == ' ') && (trimmedSentence[j + 1] == charToCompare) && (i - 1 - distanceOfWord != j))
                {
                    countToCompare++;
                }
            }
            if (totalCount < countToCompare)
            {
                totalCount = countToCompare;
                popularChar = charToCompare;
            }
            countToCompare = 0;
            distanceOfWord = 0;
            continue;
        }
        distanceOfWord++;
    }
    if (totalCount != 0)
    {
        cout << "Больше всего слов начинается на букву '" << popularChar << "'." << endl;
    }
    if (totalCount == 0)
    {
        cout << "В предложении все слова начинаются на разные буквы." << endl;
    }
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
