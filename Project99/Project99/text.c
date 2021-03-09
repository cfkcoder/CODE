#include <stdio.h>
#pragma warning(disable:4996)


int fun(void)
{


	static int count = 10;
	return count--;


}


int count = 1;


int main()
{


	printf("global\t\tlocal static\n");
	for (; count <= 10; ++count)
	{
		printf("%d\t\t%d\n", count, fun());

	}




	return 0;
}
//
//int main()
//{
//
//
//	printf("666");
//	printf("\r");
//	return 0;
//
//
//}