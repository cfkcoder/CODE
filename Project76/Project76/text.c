#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int a[10][10];
	int i = 0, j = 0;
	for (i =0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a[i][j] = 1;
		}
	}

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <=i; j++)
		{
			a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}