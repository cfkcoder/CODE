#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)



int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i, j;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}

	}
	printf("%d", max);

	return 0;
}



	/*int i = 0;
	int j = 0;
	for (i = 100; i < 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}*/

	/*int i = 0;
	for (i = 1000; i <=2000; i++)
	{
		if ((i % 100 != 0) && (i % 4 == 0) || i % 400 == 0)
		{
			printf("%d\n", i);
		}
	}*/

	//int a, b;
	//scanf("%d %d", &a, &b);
	//while (a != 0)
	//{
	//	/*if (a < b)
	//	{
	//		int temp = a;
	//		a = b;
	//		b = temp;
	//	}*/
	//	a = a%b;
	//}
	//printf("最大公约数是：%d\n", b);












	/*int i = 0;
	for (i = 3; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
*/





	/*int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b&&a > c&&b > c)
	{
		printf("%d %d %d", a, b, c);
	}
	if (a > b&&a > c&&c > b)
	{
		printf("%d %d %d", a, c, b);
	}
	if (b > a&&b > c&&a > c)
	{
		printf("%d %d %d", b, a, c);
	}
	if (b > a&&b > c&&c > a)
	{
		printf("%d %d %d", b, c, a);
	}
	if (c > a&&c > b&&a > b)
	{
		printf("%d %d %d", c, a, b);
	}
	if (c > a&&c > b&&b > a)
	{
		printf("%d %d %d", c, b, a);
	}
*/



	