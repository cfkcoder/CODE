#include <stdio.h>
#pragma warning(disable:4996)


void fun(int a)
{
	if (a > 9)
	{
		fun(a / 10);
		printf("%d", a % 10);
	}
	else
	{
		printf("%d", a % 10);

	}




}



int main()
{
	int a = 1234;
	fun(a);



	return 0;
}