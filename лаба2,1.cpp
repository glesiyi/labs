#include <stdio.h>
#include <locale.h>

int main()
{
    int a = 0, t = 0, d = 1;
    setlocale(LC_ALL, "Russian");
    printf(" Ввод числа\n ==> ");
   
    scanf_s ("%i", &a);
   while (a)
    {
        t += (a % 2) * d;
        a = a / 2;
        d = d * 10;
    }
   printf ("%i ", t);
   return 0;
}