#include <stdio.h>
#pragma warning(disable:4996)

//
//
//int is_leapyear(int year)
//{
//	if (year % 400 == 0)
//	{
//		return 1;
//
//	}
//	else if (year%4==0&&year%100!=0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//
//	int year;
//	printf("���������:");
//	scanf("%d", &year);
//
//	if (is_leapyear(year) == 1)
//	{
//		printf("%d������.\n", year);
//	}
//	else
//	{
//		printf("%d����
//	����.\n",year);
//	}
//
//	return 0;
//}




void fun(unsigned int num)
{

	if (num>9)
	{  
		
		fun(num/10);
		

	}
	printf("%d ", num % 10);
	

}

int main()
{
	int num;
	printf("������һ����:");
	scanf("%d", &num);
	
	fun(num);






	return 0;
}