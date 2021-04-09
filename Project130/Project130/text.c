#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)



const int a[30];
int const a[30];
int Test()
{
	static int a;
	int static b;
	int num = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	int f1 = 0;
	int f2 = 1;
	int f3 = 0;
	//int num = 20;
	while (1)
	{

		if (num > f2)
		{

			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;

		}


		else{

			break;
		}

	}
	int n1 = abs(f1 - num);
	int n2 = abs(f2 - num);
	return n1 < n2 ? n1 : n2;
	//int n = n1 < n2 ? n1 : n2;
	
}

int main()
{

	
//	printf("%d\n", n);


	/*int n=Test();
	printf("%d\n", n);*/


	int a = 21;
	int b = 1 << 5; 
	int c1 = a^b;
	printf("%d\n", c1);
	int c = a^(b - 1);
	
	printf("%d\n", c);


	return 0;
}