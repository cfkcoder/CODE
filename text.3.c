#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>






//int main()
//{
//	 char arr[] = { 1,2,3 };
//	int a = 9;
//	int len = 0;
//	int s = 0;
//	//len = sizeof(arr) / sizeof(arr[0]);
//	//s = strlen(arr);
//	printf("%p\n", (int)arr);
//	printf("%p\n",arr+1);
//	return 0;
//}
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int x = 0;
//	int y = 1;
//	swap(x, y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//int fib(int m)
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	while (m > 2)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		m--;
//
//	}
//	return third;
//}
//
//int main()
//{
//	int m = 0;
//	int s = 0;
//	printf("请输入一个数：");
//	scanf("%d", &m);
//	s=fib(m);
//	printf("%d\n", s);
//}
//
//
//
//
//
//
//
////int mult(int m, int k)
////{
////	if (k==0)
////	{
////		return 1;
//}
//	else 
//	{
//		return m*mult(m, k-1);
//	}
//
//}
//
//int main()
//{
//	int m = 0;
//	int k = 0;
//	int s = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &m,&k);
//	s = mult(m, k); 
//	printf("%d\n", s);
//    return 0;
//}








//int diguisum(int n)
//{
//
//	if (n >9)
//	{
//		return n%10+diguisum(n/10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
	/*len - 1;
    char temp = *left;
		*left = *right;
		*right = '\0';
		if (strlen(str+1)>= 2)
		{
			reverse(str + 1);
			}
		*right = temp;
}
int main()
{
    char arr[] = "abcdefg";
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}*/








void reverse(  char* str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	while (left < right)
	{
		
		char temp = *left;
		*left = *right;
		*right =temp;

		left++;
		right--;

	}
}
int main()
{
	//int k = 0;
	 char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}