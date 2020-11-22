#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
int seek(int array[], int n,int data)
{
	int left = 0;
	int right = n - 1;
	
	while (left <= right)
	{
	int mid = (left + right) / 2;
		if (array[mid] == data)
		{
			return mid;
		}
		else if (array[mid]>data)
		{
			right = right - 1;
		}
		else
		{
			left = left + 1;

		}
	}

}
int main()
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int s = 0;
	s=seek(array, 10,7);
	printf("%d", s);
	return 0;
}
