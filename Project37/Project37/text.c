#include <stdio.h>
#pragma warning(disable:4996)

//
//int Str(char str[])
//{
//	int i = 0;
//	int n = 0;
//	while (str[i])
//	{
//		n++;
//		i++;
//	}
//
//	return n;
//}

//
//
//int Str(char *str)
//{
//	if (*str=='\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Str(str + 1);
//	}
//
//
////}
//int main()
//{
//
//	char str[] = "asdfghj";
//	printf("%d\n", Str(str));
//	
//
//
//
//	return 0;
//}



//
//char* reserve_string(char *str)
//{
//	char temp;
//
//
//
//
//
//}
//int main()
//{
//
//	char str[] = "asdfghj";
//	strlen(str);
//	reserve_string(str);
//
//
//
//	return 0;
//}


//
//int Fib(int n)
//{
//	
//	        if (n == 1)
//			{
//				return 0;
//		     }
//		
//		    if (n == 2)
//			{
//			return 1;
//			}
//	      else
//	      {
//		return Fib(n - 1) + Fib(n - 2);
//	     }
//
//
//
//	return n;
//
//}



int Fib(int n)
{

	int first = 0;
	int second = 1;
	int third ;
	if (n == 1)
	{
		return 0;
	}

	if (n == 2)
	{
		return 1;
	}

	while (n > 2)
	{
		third = first + second;
		first = second;
		second = third;

		n--;
	}
	return third;
}

int main()
{

	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("%d\n", Fib(n));

	return 0;
}