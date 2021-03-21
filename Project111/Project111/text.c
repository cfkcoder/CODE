#include <stdio.h>
#pragma warning(disable:4996)


int main()
{/*
	char a = 1;
	char b = 2;
	char c = a + b;


	printf("%c\n", 3);
*/

	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb60000;

	if (a == 0xb6)
	{
		printf("a");
	}

	if (b == 0xb600)
	{
		printf("b");
	}

	if (c == 0xb60000)
	{
		printf("c\n");
	}


	return 0;
}