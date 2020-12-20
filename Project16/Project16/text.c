#include <stdio.h>

#pragma warning(disable:4996)

int c = 1;

void func1()
{
  c = 10;


}

int main()
{

	int a = 0;
	func1();
	printf("%d",c);

	return 0;
}