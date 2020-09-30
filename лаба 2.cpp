#include <stdio.h>
int main()
{
    printf(" enter number\n a= ");
    int a, b;
    scanf_s("%i", &a);
    for (int i = 31; i >= 0; i--) // цикл который переводит из 10 в 2
    {
        b = ((a >> i) & 1);
        printf("%i ", b);
    }
    return 0;

}
