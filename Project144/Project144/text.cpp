#include <stdio.h>
#pragma warning(disable:4996)

int fun(int a, int b=2, int c=3)
{

	int d = a + b + c;
	return d;


}

int main()
{

	int a = 10;
	//a=fun(1, 2, 3);
	a = fun(1);
	printf("%d\n", a);
	return 0;

}
//
//
//int fun()
//{
//	int a = 10;
//}
//int main()
//{
//	int b = fun();
//	printf("%d\n", b);
//
//
//	return 0;
//}