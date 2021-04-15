#include <stdio.h>
#include <malloc.h>
#include <vld.h>

#pragma warning(disable:4996)

int main()
{

	int *p = (int*)malloc(sizeof(int));
	int *p1 = p;
	free(p);
	printf("%d", *p1);




	return 0;
}