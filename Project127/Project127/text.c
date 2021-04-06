#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int a = -4;
	unsigned int b = 4;
	a >>= 1;
	b >>= 1;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;

}