//Григорович Константин ИВТ-8, 1 вариант , 1 задание , 1 программа

/*Объявить массив из n=15 вещественных чисел, проинициализировать единицами.
Функция processArray() должна домножить все элементы с четными индексами на
случайное число из диапазона [a, b] (a и b ввести с клавиатуры, a < 0), подсчитать и
вернуть количество отрицательных элементов массива и сформировать выходной
массив, содержащий только отрицательные элементы входного (т.е. размерность
уменьшится). Вывести на экран результирующие массивы.*/

#include <iostream> // подключение функций ввода/вывода
#include <cmath>
#include <stdio.h>
#include <ctime>
#include <cstdio>

using namespace std; // чтобы не записывать std::cin

void processArray(int);
void processArrai_negatively(int);
const int n = 15;//Создаём 2 массива для вывода
int* mas = new int[15];
int i;
int c = 0;

void processArray(int* mas, int i)//Функция
{
    int a; //для диапазона (значение a)
    int b; //для диапазона (значение b)
    int r; //для случайного значения
    printf("a=");//Ввод данных
    cin >> a;
    while (a >= 0)
    {
        printf("а должно быть отрицательным, введите другое а\n");

        printf("à=");
        cin >> a;

    }
    printf("b=");
    cin >> b;
    srand(time(0));

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            r = rand() % b + a; //Случайное значение от -а до b
            mas[i] = mas[i] * r;

            r = 0;
        }
    }

}

void processArrai_negatively(int* mas, int i, int c)//Функция для подсчёта отрицательных
{

    for (int i = 0; i <= n; i++)
    {
        if (mas[i] < 0)
        {
            c = c + 1;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");//Русский язык в консоли
    for (i = 0; i < n; ++i)
    {
        mas[i] = 1;
    };//Создал массив

    int d[15] = { 0 };
    processArray(mas, i);
    printf("[Вход]\n");
    for (i = 0; i < n; ++i)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    processArrai_negatively(mas, i, c);
    cout << "[Выход]" << endl;
    for (i = 0; i < n; ++i)
    {
        if (mas[i] < 0)//Поиск массива отрицательных
        {
            d[i] = mas[i];
            c++; //Подсчёт отрицательных
        }

        cout << d[i] << " ";
    }
    cout << endl;
    cout << "Кол-во отриц.=" << c;//Вывод кол-ва отрицательных
    return 0;
}