#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


int main()
{
	int *p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("malloc ʧ��!");

	}
	free(p);
	p = NULL;

	printf("%p\n", p);


	return 0;
}