#include <stdio.h>
#pragma warning(disable:4996)




int Fib(int n)
{

	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 1;
	}
	else{

		return Fib(n - 1) + Fib(n - 2);
	}



}

//
//int Fib(int n)
//{
//
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	int first=1;
//	int second = 1;
//	int third;
//	while (n > 2)
//	{
//		third = first+second;
//		first = second;
//		second = third;
//		
//		n--;
//	}
//	return third;
//
//}



long long Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else{
		return n*Fac(n - 1);
	}


}

int main()
{
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("%d\n", Fac(n));
	

	return 0;
}