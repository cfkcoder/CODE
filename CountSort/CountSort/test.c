#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)




void CountSort(int *arr, int n)
{
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}

	int range = max - min + 1;
	int* countArry = (int*)malloc(sizeof(int)*range);

	memset(countArry, 0, sizeof(int)*(range));
	for (int i = 0; i < n; ++i)
	{
		countArry[arr[i] - min]++;
	}
	int k = 0;
	for (int j = 0; j < range; ++j)
	{
		while (countArry[j]--)
		{
			arr[k++] = j + min;
		}
	}




}

int main()
{
	int arr[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	CountSort(arr, n);
	for (int j = 0; j < n; ++j)
	{
		printf("%d ", arr[j]);
	}




	return 0;
}