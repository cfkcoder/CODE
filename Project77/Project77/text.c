#include <stdio.h>
#pragma warning(disable:4996)




long long Fibnacci(size_t N)
{
	if (N < 2)
	{
		return N;
	}
	int fib0 = 0, fib1 = 1, fib2;
	while (N>=2)
	{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;
		N--;
	}

	return fib2;
}
int main()
{
	printf("请输入一个数:");
	int n = 0;
	scanf("%d", &n);
	int k=Fibnacci(n);
	printf("%d", k);






	return 0;
}


