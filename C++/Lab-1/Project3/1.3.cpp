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
    
    setlocale(LC_ALL, "Russian");//������� ���� � �������
    printf_s("������ ��� ������:\n      %s\n", s);

    //cout << strchr(s,5);

    printf_s("����� �� �������:   %c\n", ch);

    // Search forward.
    pdest = strchr(s, ch);
    result = (int)(pdest - s + 1);
    if (pdest != NULL)
        printf_s("���������:   ������ %c � ������  %d\n",
            ch, result);
    else
        printf_s("���������:  ��������� %c �� �������\n", ch);

    // Search backward.
    pdest = strrchr(s, ch);
    result = (int)(pdest - s + 1);
    if (pdest != NULL)
        printf_s("���������:   ��������� %c � ������ %d\n", ch, result);
   else
      printf_s("���������:\t%c �� �������\n", ch);

       
}
