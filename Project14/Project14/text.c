#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)



int main()
{

	int i = 0;
	int n = 0;
	for (i = 9; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			n++;
		}
		if (i / 10 % 10 == 9)
		{
			n++;
		}

	}
	printf("%d\n", n);
	int a, b, c;



	return 0;
}