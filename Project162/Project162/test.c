#include <stdio.h>
#pragma warning(disable:4996)



void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;



}

void QuickSort(int *arr,int left,int right)
{

	if (left>=right)
	{
		return;
	}
	int begin = left;
	int end = right;
	int key = left;

	while (begin != end)
	{

		while (arr[end] >= arr[key] && begin < end)
		{
			end--;
		}

		while (arr[begin] <= arr[key] && begin < end)
		{
			begin++;
		}

		//if (left<right)
		Swap(&arr[begin], &arr[end]);

	}
	Swap(&arr[key], &arr[begin]);
	key = begin;

	QuickSort(arr, left, key - 1);
	QuickSort(arr, key + 1, right);

}






void PrintfArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{

	int arr[] = { 5,4 };
	QuickSort(arr, 0,sizeof(arr) / sizeof(arr[0])-1);
	PrintfArray(arr, sizeof(arr) / sizeof(arr[0]));


	return 0;
}