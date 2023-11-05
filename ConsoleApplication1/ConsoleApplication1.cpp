//лабораторная работа  номер 4, Задание 1.
//Выполнил: Фукс Владислав ивт 32 
//Дано целое число N (> 1) и набор из N вещественных чисел.
//Прове-рить, образует ли данный набор убывающую последовательность. 
//Ес-ли образует, то вывести TRUE, если нет — вывести FALSE.
#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n = 0;
    //первое число
    double p = 0;
    //второе число
    double v = 0;
    bool flag = true;
    cout << "Целое число N: "; cin >> n;
    cin >> p;
    //Цикл
    for (int i = 0; i < n - 1; i++) {
        cin >> v;
        if (v >= p)

        {
            flag = false;
            break;
        }
        //замена чисел, чтобы пройтись по всем
        p = v;
    }
    //проверка
    if (flag)
        cout << "true";
    else
        cout << "false";

}
