#include <stdio.h>
#pragma warning(disable:4996)


int fun()
{
	static int count = 1;
	return ++count;

}



int main()
{


	//int answer;
	//answer = fun() - fun()*fun();
	//printf("%d\n", answer);
	//return 0;

	int i = 1;
	//int ret = (i++) + (i++) + (i++);
	int ret1 = (++i) + (++i) + (++i);
	printf("%d\n", ret1);
	//printf("%d\n", ret);
	printf("%d\n", i);


	return 0;
}