#include <stdio.h>
#pragma warning(disable:4996)

//
//int main()
//{
//
//	int n;
//	printf("请输入一个数:");
//	scanf("%d", &n);
//	int i, j;
//	for (i = 1; i <=n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//
//
//
//
//
//	return 0;
//}



long long Fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else{
		return n*Fac(n - 1);
	}

}

//
//long long Fac(int n)
//{
//	long long sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
int main()
{

	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("%d\n", Fac(n));
	

	//
	//for (int i = 1; i <= n; i++)
	//{
	//	sum *= i;
	//}
	//printf("%d\n", sum);



	return 0;
}