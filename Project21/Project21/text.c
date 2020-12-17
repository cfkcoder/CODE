#include <stdio.h>
#pragma warning(disable:4996)



void fun(int *str, int n, int x)
{
	int i, j;
	int k=0;
	for (i = 0; i < n; i++)
	{
		if (str[i] != x)
		{
			k++;
		}
		else{
			break;
		}
	}
	if (k== n)
	{
		printf("É¾³ýÊ§°Ü£¡");
	}
	else
	{
		for (j = k; j < n - 1; j++)
		{
			str[j] = str[j + 1];
		}
	}
}
int main()
{

	int str[] = { 1, 4, 2, 6, 3, 5, 7 };
	int n = sizeof(str) / sizeof(str[0]);
	fun(str, n,6);
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", str[i]);
	}
	return 0;
}