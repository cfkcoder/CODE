#include <stdio.h>
#pragma warning(disable:4996)


int main()
{

	int line = 0;
	printf("����������: ");
	scanf("%d", &line);


	//��ӡ�ϰ벿��
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
	

	//��ӡ�°벿��
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