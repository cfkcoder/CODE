#include<stdio.h>
#include<Windows.h>


int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	
	printf("a=%d b=%d c=%d ", a, b, c);
	system("pause");
	
	return 0;
}


















