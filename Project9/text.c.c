#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)


//int main()
//{
//	int line;
//	printf("请输入一个数：");
//	scanf("%d", &line);
//	int i = 0;
//	int j=0;
//	for (i = 0; i < line; i++)
//	{
//
//		for (j = 0; j < line - i - 1;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <=i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//			
//	}
//
//
//
//	return 0; 
//}




void Insertsort(int *str, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;
	for (i = 0; i < n - 1;i++)
	{
		k = i;
		for (j = i+1; j < n; j++)
		{
			if (str[k] > str[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			temp = str[i];
			str[i] = str[k];
			str[k] = temp;

		}
	}

}
int main()
{

	int str[] = {22,33,1,6,2,4,8,5};
	int n = sizeof(str) / sizeof(str[0]);
	Insertsort(str, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", str[i]);
	}

	return 0;
}