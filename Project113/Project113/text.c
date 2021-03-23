#include <stdio.h>
#pragma warning(disable:4996)


int main()
{

	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));



	return 0;
}