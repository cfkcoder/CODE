#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int a = 10;
	a = a + 1;
	a = a;
	int &a = a;



	return 0;
}