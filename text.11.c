#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

//int insertsort(int *str, int n)
//{
//	int i, j, k;
//	int temp;
//	for (i = 1; i < n; i++)
//	{
//		 
//		 temp=str[i];
//		 j = i-1;
//		while (j >= 0 && temp < str[j])
//		{
//			str[j + 1] = str[j];
//			j--;
//		}
//		str[j+1]=temp;
//
//	}
//
//


	/*int i, j;
	int k;
	int temp = 0;
	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (str[k] > str[j])
			{
				temp = str[k];
				str[k] = str[j];
				str[j] = temp;

			}

		}
	}

}
*/
int main()
{
	int line = 0;
	printf("请输入一个数：");
	scanf("%d", &line);
	int i, j;
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line - i - 1; j++)
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


	/*int str[10] = { 3, 6, 5, 4, 2, 1, 7, 8, 9, 10 };
	int n = sizeof(str) / sizeof(str[0]);
	insertsort(str, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", str[i]);
	}

	return 0;*/
		return 0;
}
