#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)


int main()
{
	char *p = (char*)malloc(1);


	strcpy(p, "hellow world");
	printf("%s\n", p);
	return 0;
}