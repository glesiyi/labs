#include <stdio.h>
int main()
{
    int n , k20 , k10, k5, k1, k;
    printf(" enter number\n ==> ");
    scanf_s("%d", &n);
    k=0;
    for (k20 = 0; k20 <= n / 20; k20++)
    {
        for (k10 = 0; k10 <= (n - 20 * k20) / 10; k10++)
        {
            for (k5 = 0; k5 <= (n - 20 * k20 - 10 * k10) / 5; k5++)
            {

                k1 = n - 20 * k20 - 10 * k10 - 5 * k5;
                printf("20 - [%d] 10 - [%d] 5 - [%d] 1- [%d] \n", k20, k10, k5, k1);
                k = k + 1;

            }
        }
    }
    printf("%i ", k);

    return 0;
}






   