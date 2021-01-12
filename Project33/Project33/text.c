#include <stdio.h>
#pragma warning(disable:4996)


//
//int main()
//{
//
//
//	int i = 0;
//	int n = 0;
//	for (i = 9; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 % 10 == 9)
//		{
//			n++;
//		}
//
//
//	}
//	printf("%d\n", n);
//
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//
//
//int binfind(int *str, int a, int b, int k)
//{
//
//	int i, j;
//	int mid = 0;
//	int left = a;
//	int right = b;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//
//
//		if (k < str[mid])
//		{
//			right = mid;
//			right--;
//
//
//		}
//
//		else if (k>str[mid])
//		{
//
//			left = mid;
//			left++;
//		}
//		else if (str[mid] == k)
//		{
//			return mid;
//
//		}
//	}
//
//	return -1;
//
//}
//int main()
//{
//
//	int str[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = sizeof(str) / sizeof(str[0]);
//	int flag = binfind(str, 0, n - 1, 6);
//
//
//	if (flag != -1)
//	{
//		printf("找到了,下标是:%d\n", flag);
//	}
//	if (flag == -1)
//	{
//		printf("没找到.\n");
//	}
//	}
//	


int main()
{
	int i;
	int k = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (1.0 / i)*k;
		k *= -1;
	}
	printf("sum=%lf\n", sum);


	return 0;
}




//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}