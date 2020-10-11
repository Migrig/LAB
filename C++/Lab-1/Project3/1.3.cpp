//Григорович Константин ИВТ-8, 1 вариант , 1 задание , 3 программа

/*Функция strchr.
Формат char* strchr(char* s, int c).
Функция находит в строке s первое вхождение символа с и возвращает подстроку,
начинающуюся с этого символа.*/

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char* rest_of_string = 0; //Часть строки, которую необходимо вернуть
char* SC(char* s, int c)
{
    size_t len = 0;//Начальный инедкс
    while (s[len] != '\0')
    {
        if (s[len] == c) rest_of_string = s + len;//поиск нужного символа
        len++;
    }
    return rest_of_string;
}
int main()
{
    char s[] = "Sabaton - camouflage";
    int  ch = 'c';
    char* pdest;
    int result;
    char* standart_result = strrchr(s, 'c');
    setlocale(LC_ALL, "Russian");//Русский язык в консоли
    printf_s("Строка для поиска:\n      %s\n", s);

    //cout << strchr(s,5);

    printf_s("Поиск по символу:   %c\n", ch);
    printf("Строчка с буквы :%s\n", standart_result);
    // Search forward.
    pdest = strchr(s, ch);
    result = (int)(pdest - s + 1);
    if (pdest != NULL)
        printf_s("Результат:   первая %c в строке  %d\n",
            ch, result);
    else
        printf_s("Результат:  последняя %c не найдено\n", ch);

    // Search backward.
    pdest = strrchr(s, ch);
    result = (int)(pdest - s + 1);
    if (pdest != NULL)
        printf_s("Результат:   последняя %c в строке %d\n", ch, result);
    else
        printf_s("Результат:\t%c не найдено\n", ch);  
}
