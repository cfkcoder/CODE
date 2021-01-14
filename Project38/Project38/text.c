#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

//
//void reserve_string(char* str)
//{
//	char temp;
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//
//
//		left++;
//		right--;
//	}
//}


//
//
//void reserve_string(char *arr)
//{
//	int n = strlen(arr);
//	char temp = *arr;
//	*arr = *(arr +n - 1);
//	
//	*(arr + n - 1) = '\0';
//
//	if (n >= 2)
//	{
//		reserve_string(arr + 1);
//	}
//
//	*(arr + n - 1) = temp;
//
//
//}
//
//int main()
//{
//
//	char str[] = "asdfghjkl";
//	reserve_string(str);
//	printf("%s\n", str);
//
//	return 0;
//}
//
// int DigitSum(int n)
//{
//	if (n!=0)
//	{
//		return n % 10+DigitSum(n/10);
//	}
//	return 0;
//		
//}
//
//
//int main()
//{ 
//	int n;
//	printf("请输入一个数:");
//	scanf("%d", &n);
//
//
//	printf("%d\n", DigitSum(n));
//	
//
//
//
//
//	return 0;
//}


int fun(int n,int k)
{

	
	if (k > 0)
	{
		return n*fun(n, k - 1);
	}
	return 1;



}


int main()
{

	int n, k;
	printf("请输入俩个数:");
	scanf("%d %d", &n,&k);
	printf("%d\n", fun(n,k));
	
	return 0;
}