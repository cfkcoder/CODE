#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define N 5


//
//int fun(int num)
//{
//	int k=1;
//	do
//	{
//		k *= num % 10;
//		num /= 10;
//
//	} while (num);
//
//		return (k);
//}
//int main()
//{
//
//	int n ;
//	scanf("%d", &n);
//	printf("%d\n", fun(n));
//
//	return 0;
//}

//
//int main()
//{

	//char s[5] = { 'A', 'B', 'C', 'D', 'E' };
	/*char *s;
		scanf("%s", s);*/

	/*int n = sizeof(4);
	printf("%d\n", n);
	*/

	//int a = &N;

	//1.a
		/*int m = 3, n = 4, x;
		x = -m++;
		x = x + 8 / ++n;
		printf("%d\n", x);*/


		//2.
		//int a = 5, b = 4, c = 3, d = 2;
		//if (a > b > c)
		//	printf("%d\n", d);
		//else if ((c - 1 >= d) == 1)
		//	printf("%d\n", d + 1);
		//else
		//{
		//	printf("%d\n", d + 2);
		//	//B;
		//}
		
		/*int fun()D
		{
			static int x = 1;
			x *= 2;
			return x;
		}
		main()
		{
			int i, s = 1;
			for (i = 1; i <= 3; i++)
			
				s *= fun();
				printf("%d\n", s);
			

			return 0;
		}
	*/
//
//	return 0;
//}

  int amovep(int *p, int(*a)[3], int n)
{

	int i, j;
	{
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			*p = a[i][j];
			p++;

		}

	}

}
int main()
{

	 int a[3][3] = { { 1, 3, 5 }, { 2, 4, 6 } };
	 int *p = (int*)malloc(100);
	amovep(p, a, 3);
	printf("%d%d\n", p[2], p[5] );
	 free (p);




	return 0;
}