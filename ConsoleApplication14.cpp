
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int n, buf1, buf2, nums, letters, symbols, repnum = 0, repsym = 0, replet = 0;
	letters = 0;
	symbols = 0;
	nums = 0;
	int m;
	char* st;
	printf("Size: ");
	scanf_s("%d", &m);
	st = (char*)calloc(m, sizeof(char));
	printf("Enter srting:");
	rewind(stdin);
	gets_s(st, m);
	int i = 0;
	int rep = 0;
	while (i < st[i])
	{
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			rep++;
			i++;
			while ((st[i] >= 'a' && st[i] <= 'z') && (i < st[i]))
			{
				rep++;
				i++;
			}
			if (rep > 1)
				letters++;
			rep = 0;
		}
		if (st[i] >= '0' && st[i] <= '9')
		{
			rep++;
			i++;
			while ((st[i] >= '0' && st[i] <= '9') && (i < st[i]))
			{
				rep++;
				i++;
			}
			if (rep > 1)
				nums++;
			rep = 0;
		}
		if (st[i] == '+' || st[i] == '-' || st[i] == '*')
		{
			rep++;
			i++;
			while ((st[i] == '+' || st[i] == '-' || st[i] == '*') && (i < st[i]))
			{
				rep++;
				i++;
			}
			if (rep > 1)
				symbols++;
			rep = 0;
		}
		if (i == (st[i] - 1))
			i++;
	}
	printf("\nLetters %d numbers %d symbols %d\n", letters, nums, symbols);
	if (letters > symbols)
		printf("letters>symbols\n");
	if (letters <= symbols)
		printf("letters!>symbols\n");
	return 0;
}