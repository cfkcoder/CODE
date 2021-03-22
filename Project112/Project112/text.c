#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int *func()
{

	int a = 10;
	return &a;


}

//
//char *func()
//{
//	char p[] = "a";
//	return p;
//}


int main()
{

	//int *p = NULL;
	//*p = 20;
	//printf("%d\n", *p);

	/*int a = 10;
	int b = 9;
	int c = a > b ? a : b;
	printf("%d\n", c);*/


	 int *p = func();
	//printf("cccccccc\n");
	//char *p = func();
	printf("%d\n",*p);
	//printf("%s\n", p);

	return 0;
}







