#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


int *fun()
{
	/*int a = 10;
	return &a;*/

	/*char arr[] = "asdfghjk";
	return arr;*/

	/*char *s = "asdasdasd";
	return s;*/
	/*int *a = (int*)malloc(sizeof(int));
	*a = 10;
	return a;*/

	const int a = 10;
	return &a;
}
int main()
{
//
//	int *p=fun();
//	printf("ccc\n");
//	/*char *str = fun();
//	printf(str);*/
//printf("%d\n", *p);

	/*char *arr = fun();
	printf(arr);
*/

	const int a = 10;
	//a = 12;
	printf("%d\n", a);
	return 0;


}

