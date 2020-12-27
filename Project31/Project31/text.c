#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int i, j;
	for (i = 1; i<=9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\nGood job! \n");

	return 0;
}