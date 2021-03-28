#include <stdio.h>
#pragma warning(disable:4996)

#define N 1000

int Fib[N];

int min(int a, int b)
{
	return a > b ? b: a;


}


int main()
{
	 Fib[0] = 1;
	 Fib[1] = 1;
	for (int i = 2; i < N; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];


	}
	int n;
	while (scanf("%d", &n))
	{
		int i = 0;
		for (; i < N - 1; i++)
		{
			if (n >= Fib[i] && n <= Fib[i + 1])
			{
				break;
			}
		}
		int minstep = min(n - Fib[i], Fib[i + 1] - n);
		printf("%d\n", minstep);
	}
	



	return 0;
}