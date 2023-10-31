//Лабораторная работа номер 4. Вариант 21 задание 1
//Выполнил Фукс Владислав Ивт 32
 
//Дано целое число N (> 1) и набор из N вещественных чисел. Проверить,
//образует ли данный набор убывающую последовательность. 
// Если образует, то вывести TRUE, если нет — вывести FALSE.


#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double number;
    int n;

    cout << "Целое число N: "; cin >> n;
    cout << "Набор из N вещественных чисел: "; cin >> number;


    double buffer;
    //изначально проверка = true
    bool flag = true;
    //Цикл
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        if (buffer >= number) {
            flag = false;
            break;
        }
        else
            number = buffer;
    }
    //Проверка
    if (flag)
        cout << "True";
    else
        cout << "False";
}