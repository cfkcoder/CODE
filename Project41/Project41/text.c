#include <stdio.h>
#pragma warning(disable:4996)




void init(int *a,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}


   

void reserve(int *a,int sz)
{
	int *left = a;
	int *right = a + sz - 1;
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
	

}




void print(int *a, int sz)
{

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

}

//
//void print(int *a,int sz)
//{
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//}




void reserve_string(char *arr)
{
	int n = strlen(arr);
	char temp = *arr;
	*arr = *(arr +n - 1);
	
	*(arr + n - 1) = '\0';

	if (n >= 2)
	{
		reserve_string(arr + 1);
	}

	*(arr + n - 1) = temp;


}

int main()
{

	int a[10];
	init(a,10);
	print(a, 10);
	reserve(a, 10);
	
	


	return 0;
}