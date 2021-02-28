#include <stdio.h>
#pragma warning(disable:4996)



void Insertsort(int *arr, int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = i-1;
		int k = arr[i];
		while (j >= 0 && k < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = k;
		


	}
}

void Selectsort(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[k]>arr[j])
			{
				k = j;
			}
		}

		if (k != i)
		{
			int tmp = arr[i];
			arr[i] = arr[k];
			arr[k] = tmp;

		}
	}
}

int main()
{
	int arr[] = { 1, 5, 2, 6, 3, 7, 4, 8 };
	int n = sizeof(arr) / sizeof(int);
	Insertsort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");




	return 0;
}