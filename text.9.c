#include<stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)


int main()
{
	int a, b, c;
	int average;
	scanf("%d %d %d", &a, &b, &c);
	average = a + b + c;
	average /= 3;
	if (average<60)
	{
		printf("NO");
	}
		
	else
	{
		printf("YES");
	}

	
	


	return 0;
}