#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)


void fun(int *str, int n, int b)
{
	int i=0,j;
	str[n] = b;
	while (str[i] != b)
	{
		i++;
	}
	if (i == n)
	{
		printf("É¾³ýÊ§°Ü£¡");
	}
	else
	{
		for (j = i; j < n-1; j++)
		{
			str[j] = str[j+1];
		}
	}


}



int main()
{



	int str[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int n = sizeof(str) / sizeof(str[0]);
	int i = 0;
	fun(str, n, 3);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d ", str[i]);
	}
	//char str[] = "asd,fgh ghj";
	//char *sub = strtok(str, "| ,");
	//while (sub)
	//{
	//	printf("%s\n", sub);
	//	sub = strtok(NULL, "| ,");

	//}


	/*int str[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(str) / sizeof(str[0]);
	int i = 0;
	for (i = n-1; i >=3; i--)
	{
		str[i+1] = str[i];
	}
	str[3] = 99;

	for (i = 0; i <= n; i++)
	{
		printf("%d ", str[i]);
	}

*/
	return 0;
}