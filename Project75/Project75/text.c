#include <stdio.h>
#pragma warning(disable:4996)



int main()
{
	int line = 0;
	printf("请输入一个数:");
	scanf("%d", &line);
	int i = 0, j = 0;

	for (i = 0; i < line; i++)
	{
		
		for (j = 0; j < line-i-1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	for (i = 0; i < line - 1; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}



}