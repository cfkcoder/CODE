#include <stdio.h>
#pragma warning(disable:4996)



int main()
{

	int line;
	printf("请输入一个数:");
	scanf("%d", &line);
	int i, j;

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line -i-1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line- 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
			
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;

}


//
//int main()
//{
//
//	int sum = 0, tmp=0;
//	int a, n;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &n);
//	
//	for (int i = 0; i < n; i++)
//	{
//		tmp=tmp * 10 + a;
//		sum += tmp;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}