#include <stdio.h>
#pragma warning(disable:4996)

//
//void exchange(int a, int b)
//{
//
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//
//	int a = 1, b = 2;
//	exchange(a, b);
//	printf("a=%d,b=%d\n", a, b);
//
//
//
//
//
//
//
//
//	return 0;
//}
//
void exchange(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{

	int a = 1, b = 2;
	exchange(&a, &b);
	printf("a=%d,b=%d\n", a, b);


	return 0;
}