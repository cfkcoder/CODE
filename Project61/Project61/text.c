#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)





int binarysearch(int *a, int n, int key)
{
	int begin = 0;
	int end = n-1;
	
	while(begin <=end)
	{
		int mid = (begin + end) / 2;
		if (key>a[mid])
		{
			begin= mid+1;

		}
		else if (key < a[mid])
		{
			end = mid;
			end--;
		
		
		}
		else{
			return mid;
		}

	}

	return -1;
}
int main()
{




	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int);
	int p=binarysearch(a, n, 1);
	if (p == -1)
	{
		printf("Ã»ÕÒµ½!\n");
	}
	else
	{
		printf("%d\n", p);
	}
	return 0;
}