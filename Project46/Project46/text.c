#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)



int flower(int a)
{
	int b[100] = { 0 };
	int k = 0;
	int j = 0;

	int sum = a;
	int sum1 = a;

	int num = 0;
	int total = 0;
	while (sum)
	{
		//i = a % 10;

		num++;
		sum = sum / 10;

	}


	while (sum1)
	{

		b[k++] = sum1 % 10;
		sum1 /= 10;

	}


	while (b[j])
	{
		total += (pow(b[j], num));
		j++;

	}


	if (total == a)
	{

		printf("%d\n", a);
	}
	else
	{
		return;
	}



}

int main()
{

	int i;
	for (i = 0; i < 100000; i++)
	{
		flower(i);
	}
	
	


	return 0;
}