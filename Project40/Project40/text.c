#include <stdio.h>
#pragma warning(disable:4996)



int main()
{

	int a[10] = { 0 };
	int b[10] = { 0 };
	printf("请输入十个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}


	printf("请再输入十个数:\n");
	for (int j = 0; j < 10; j++)
	{
		scanf("%d", &b[j]);
	}


	printf("原a数组为:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("原b数组为:");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");


	for (int j = 0; j < 10; j++)
	{
		int temp = a[j];
		a[j] = b[j];
		b[j] = temp;
	}


	printf("交换后a数组为:");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("交换后b数组为:");

	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");


	return 0;
}