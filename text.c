#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main()
{
	int i = 1;
	int j = 1;
	for (; i < 10; i++)
	{
		for (; j<=i; j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}