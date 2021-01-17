#include <stdio.h>
#pragma warning(disable:4996)



void fun1(char *str)
{

	//str++;
	return;


}

void fun(char *str)
{


	fun1(str++);


}

int main()
{

	char *str = "asdfghj";
	printf("%s\n", str);
	fun(str);
	//fun1(str++);
	printf("%s", str);


	return 0;
}