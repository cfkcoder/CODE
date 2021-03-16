#include <stdio.h>
#pragma warning(disable:4996)


int main()
{

	int line = 0;
	printf("请输入行数: ");
	scanf("%d", &line);


	//打印上半部分
	for (int i = 0; i < line;i++)
	{
		for (int j = 0; j < line - i-1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}

		printf("\n");

	}
	

	//打印下半部分
	for (int i = 0; i <line - 1; i++)
	{

		for (int j = 0; j <=i; j++)
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * (line - i - 1)-1;j++)
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;




	
	

}