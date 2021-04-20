#include <stdio.h>
#pragma warning(disable:4996)


int main()
{

	const int a = 10;
	
	int *p = &a;
	*p = 20;
	printf("%d\n", a);




	return 0;
}