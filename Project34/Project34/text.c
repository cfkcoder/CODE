#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)




//
//void swap(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
//int main()
//{
//
//	int a = 1, b = 2;
//	printf("交换前:%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后:%d %d\n", a, b);
//
//
//	return 0;
//	
//}



int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (0 == n%i)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{

	int i;
	for (i = 100; i <= 200; i++)
	{
		
		if (is_prime(i) == 1)
		{
			printf("%d是素数.\n",i);
		}
		
		
	}
	return 0;
}