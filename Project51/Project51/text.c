#include <stdio.h>
#pragma warning(disable:4996)




//
//
//void fun(int *arr, int n)
//{
//	int i, j;
//	int k;
//	for (i = 0; i < n; i++)
//	{
//		k = i;
//		for (j =i+1; j < n; j++)
//		{
//			if (arr[k]>arr[j])
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			int temp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = temp;
//		}
//
//	}
//
//
//
//
//
//}

//
//void fun(int *arr, int n)
//{
//
//
//	for (int i = 1; i < n; i++)
//	{
//		int j = i - 1;
//		int k = arr[i];
//
//		while (j >= 0 && k<arr[j])
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = k;
//
//
//
//	}
//
//
//
//}
//int main()
//{
//
//	int arr[] = { 1, 3, 2, 6, 4, 8, 5, 9 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	fun(arr, n);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//	return 0;
//}
void quicksort(int arr[], int left,int right)
{

	if (left >= right)
	{
		return;
	}
	int l = left;
	int r = right;
	int key = arr[left];
	while (l != r)
	{
		while (key <= arr[r]&&l<r)
		{
			r--;
		}
		while (key >= arr[l]&&l<r)
		{
			l++;
		}

		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;

	}

	arr[left] = arr[l];
	arr[l] = key;
	
	quicksort(arr, l + 1, right);
	quicksort(arr, left, l - 1);



}

int main()
{


	int arr[] = { 1, 3, 2, 6, 4, 8, 5, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = n - 1;
	quicksort(arr, left,right);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}