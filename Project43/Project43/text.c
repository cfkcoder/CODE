#include <stdio.h>
#pragma warning(disable:4996)


//
//
//int main()
//{
//	int a, b;
//	int count = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	while (a)
//	{
//		count++;
//		a&=(a - 1);
//	}
//	printf("%d\n", count);
//
//	
//
//
//
//
//	return 0;
//}
//
//
//int main()
//{
//
//	int a;
//	int b[100];
//	int c[100];
//	int k = 0;
//	int j = 0;
//	printf("请输入一个数:");
//	scanf("%d", &a);
//	while (a)
//	{
//		b[k++] = a % 2;
//		a /= 2;
//
//	}
//	for (int i =k-1; i>=0; i--)
//	{
//		c[j++] = b[i];
//	}
//	for (int i =0; i<k; i++)
//	{
//		printf("%d ", c[i]);
//	}
//	printf("\n");
//	printf("奇数位:\n");
//	for (int i = 0; i < k; i += 2)
//	{
//		printf("%d ", c[i]);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (int i = 1; i < k; i += 2)
//	{
//		printf("%d ",c[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//
//
//}





#include <stdio.h>
	int main()
	{
		int arr[] = { 1, 2, 3, 4, 5 };
		short *p = (short*)arr;
		int i = 0;
		for (i = 0; i<=0; i++)
		{
			*(p + i) = 0;
		}

		for (i = 0; i<5; i++)
		{
			printf("%d ", arr[i]);
		}
		return 0;
	}
	