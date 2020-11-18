
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, k = 0;
	do
	{
		system("cls");
		printf("enter number of numbers ");
		scanf_s("%d", &n);
	} while (n <= 0);
	double* mas = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++)
	{
		printf("enter %d : ", i + 1);
		scanf_s("%d", &mas[i]);
	}
	double** mas2 = (double**)malloc(n * sizeof(double*));
	for (int i = 0; i < n; i++)
		mas2[i] = (double*)malloc(n * sizeof(double));
	printf("\n");
	printf("numbers");
	for (int i = 0; i < n; i++)
		printf(" %d ", mas[i]);
	printf("\narrey \n");
	for (int i = 0; i < n; i++)
	{
		k = i;
		for (int j = 0; j < n; j++)
		{
			if (k >= n)
				k = 0;
			mas2[i][j] = mas[k] * 1;
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %d ", mas2[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}