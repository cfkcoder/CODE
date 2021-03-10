#include <stdio.h>
#pragma warning(disable:4996)


enum weekday{

	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday


};

int main()
{

	enum weekday b = (enum weekday)2;
	printf("%d\n", b);
	return 0;


}