#include <stdio.h>
#define n 10

 int fact(int k) 
{
	 int res=1;
	 for (int i = 1; i <= k; i++) {
		 res = res * i;
	 }
	 return res;
}
int main()

{
	int m = 0, ms[n], i;
	printf("fill the array - ");
	for (i = 0; i < n; i++)//цикл по элементам массива 
	{
		scanf_s("%d", &ms[i]);
	}
	printf("\nyour array - ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", ms[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (ms[i] < 0) // если элемент массива меньше нуля
		{
			ms[i] = 0; // то элемент массива равен нуля
			m += 1;// счетчик изменений
		}
	}
	printf("\naltered array - ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", ms[i]);
	}
	printf("\nnumber of replacements - %d", m);
	if (m == 0)
	{
		printf("\nyour factorial - 0");
	}
	else
	{
		printf("\nyour factorial - %d", fact(m));
	}
}
