#include <stdio.h>
#pragma warning(disable:4996)



int main()
{

	int a[10] = { 0 };
	int b[10] = { 0 };
	printf("������ʮ����:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}


	printf("��������ʮ����:\n");
	for (int j = 0; j < 10; j++)
	{
		scanf("%d", &b[j]);
	}


	printf("ԭa����Ϊ:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("ԭb����Ϊ:");
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


	printf("������a����Ϊ:");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("������b����Ϊ:");

	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");


	return 0;
}