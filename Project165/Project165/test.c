#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


void PrintArray(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}

void _MergeSort(int *arr, int left, int right,int* tmp)
{
	
	if (left == right)
		return;

	int mid = left + ((right - left) >> 1);


	_MergeSort(arr, left, mid,tmp);
	_MergeSort(arr, mid + 1, right,tmp);


	int begin1 = left; int end1 = mid;
	int begin2 = mid+1;  int end2 = right;

	int i = begin1;
	while (begin1 <= end1&&begin2 <= end2)
	{

		if (arr[begin1] > arr[begin2])
		{

			tmp[i++] = arr[begin2++];


		}

		else{

			tmp[i++] = arr[begin1++];

		}
	}

	while (begin1 <= end1)
	{

		tmp[i++] = arr[begin1++];


	}

	while (begin2 <=end2)
	{

	 tmp[i++] = arr[begin2++];

	}

	int j = left;
	while (j<= right)
	{


		arr[j] = tmp[j];
		++j;

	}

}


void MergeSort(int *arr, int n)
{

	int *tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(arr, 0, n - 1,tmp);
	free(tmp);

}

int main()
{

	int arr[] = { 9, 1, 8, 2, 7, 3, 6, 4, 5 };
	MergeSort(arr,sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;

}