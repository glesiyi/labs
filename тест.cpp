#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{

    int n, count = 0;
    do
    {
        system("cls");
        printf("Enter the number of numbers: ");
       scanf_s(" %d", &n);
    } while (n <= 0);
    double* mas = new double[n];//создание динамического массива
    for (int i = 0; i < n; i++)
    {
        printf ( "Enter a", i + 1 ,": ");
        scanf_s("%d",mas[i]);
    }
    double** mas2 = new double* [n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mas2[i] = new double[j];
    printf("%d", n);
    printf("Numbers\n"); 
    for (int i = 0; i < n; i++)
        printf("%d", mas[i], "  ");  
   printf ("\n\nArrey\n");
    for (int i = 0; i < n; i++)
    {
        count = i;
        for (int j = 0; j < n; j++)
        {
            if (count >= n)
                count = 0;
            mas2[i][j] = mas[count] * 1.0;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf ("%d", setw(5) , mas2[i][j]);
        printf("%d", n);
    }
    system("pause");
    return 0;