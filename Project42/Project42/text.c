#include <stdio.h>
#pragma warning(disable:4996)


//
//
//void swap(int *a, int *b)
//{
//
//	*a ^= *b;
//	*b ^= *a;
//	*a ^= *b;
//
//}
//
//int main()
//{
//
//	int a, b;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//    printf("交换后:a=%d,b=%d\n", a, b);
//
//
//	return 0;
//}



int erjz(int a)
{
	int count = 0;
	while (a)
	{
		count++;
		a &= (a - 1);
			
	}
	return count;



}


int main()
{


	int a;
	printf("请输入一个数:");
	scanf("%d", &a);
	printf("%d\n", erjz(a));
	



	return 0;

}