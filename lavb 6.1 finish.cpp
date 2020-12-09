#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

	int** m = 0, N = 0, pob = 0, i, j, k = 0;
	do
	{
		system("CLS");
		printf("\nenter size of matrix\n");
		rewind(stdin);
		i = scanf_s("%d", &N);
		srand(time(0));
		if (i < 1)
		{
			fflush(stdin); // чистка буффера клавиатуры при ошибке ввода
			continue; // повтор цикла
		}
		if (!(m = (int**)malloc(sizeof(int*) * N)))
			printf("\nnot enough free memory");
		for (i = 0; i < N; i++) // цикл выбора указателя на строку матрицы
			if (!(*(m + i) = (int*)malloc(sizeof(int) * N))) // выделение памяти под строку матрицы
			{ // с проверкой выделена ли память
				printf("\nnot enough free memory");
				for (j = 0; j < i; j++) free(m[j]); free(m); // освобождение памяти при ошибке
				m = nullptr; // сброс указателя для повтора операции выделения памяти
				break; // выход из цикла по i (выбора указателя на строку матрицы)
			}
	} while (!m);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			m[i][j] = rand() % 3;
			if (i == j) m[i][j] = 0;
			else m[j][i] = m[i][j];
		}
	}
	for (i = 0; i < N; i++) //Вывод матрицы
	{
		printf("\n %d team ", i + 1);
		for (j = 0; j < N; j++)
		{
			printf(" %d ", m[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		pob = 0;
		for (j = 0; j < N; j++)
		{
			if (m[i][j] == 2) pob++;
			else if (m[i][j] == 0) pob--;
		}
		pob++;
		if (pob > 0) k++;
	}
	if (k > 0)
		printf("\nnumber of teams, thats have more win, than defeat: %d", k);
	else
		printf("\nthere are no teams , thats have more win, than defeat: %d", k);
	k = 0;
	printf("\n numbers of teams that passed without defeat:%d", k);
	for (i = 0; i < N; i++)
	{
		pob = 0;
		for (j = 0; j < N; j++)
		{
			if (m[i][j] == 2) pob++;
		}
		pob++;

		if (pob == N) printf("%d ", i++ );
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		pob = 0;
		for (j = 0; j < N; j++)
		{
			if (m[i][j] == 2) pob++;
		}
		if (pob > (N - 1) / 2) k++;
	}
	if (k > 0) printf("there is at least one team that has won more than half of the games: %d", k);
	else printf("there are no teams that have won more than half of the games");
	return 0;
}
