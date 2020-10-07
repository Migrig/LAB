#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//char* strchr(char* s, int c) 
//{
   // char* res;
   // int len = 0;
  //  while (s[len] != 0)
     //   len++;
    //
//    for (int i = c; i < len; i++)
//res += s[i];
///
 //  return res;
//}
//
int main()
{
    char s[] = "www.some_address.and_something_else.com";
    int  ch = 'a';
    char* pdest;
    int result;
    
    setlocale(LC_ALL, "Russian");//Русский язык в консоли
    printf_s("Строка для поиска:\n      %s\n", s);

    //cout << strchr(s,5);

    printf_s("Поиск по символу:   %c\n", ch);

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
