#include <stdio.h>
#pragma warning(disable:4996)


int fun()
{
	int a = 10;
	return a;


}

int main()
{

	int p = fun();
	//printf("666\n");
	printf("%d\n", p);
	return 0;
}