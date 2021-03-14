#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


static int a;


int main()
{

	int a = 10;
	if (a)
	{
		int a = 11;
		printf("%d\n", a);

	}


	return 0;
}