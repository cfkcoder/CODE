#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


int main()
{

	int *p = (int*)malloc(sizeof(int));
	printf("%p\n", p);

	free(p);

	printf("%p\n", p);



	return 0;

}