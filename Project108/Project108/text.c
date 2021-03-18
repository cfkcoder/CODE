#include <stdio.h>
#pragma warning(disable:4996)



void quicksort(int *arr, int left, int right)
{


	//if (right - left == 1)
	//{
	//	return;
	//}

	if (left>right)
	{

		return;

	}

	int l = left;
	int r = right;
	int key = arr[left];
	while (l!=r)
	{
		while (arr[r] >=key&&l<r)
		{
			r--;

		}

		while (arr[l]<=key&&l<r)
		{
			l++;
		}

		if (l < r)
		{

			int tmp = arr[l];
			arr[l] = arr[r];
			arr[r] = tmp;

		}
	}

	arr[left] = arr[l];
	arr[l] = key;
	quicksort(arr, left, l - 1);
	quicksort(arr, l + 1, right);


}


//void quicksort(int arr[], int left, int right)
//{
//
//
//	int key = arr[left];
//	int l = left;
//	int r = right;
//	while (l != r)
//	{
//		while (arr[r] >= key&&l < r)
//		{
//
//			r--;
//
//		}
//		while (arr[l] <= key&&l<r)
//		{
//
//			l++;
//
//
//		}
//		if (l<r)
//		{
//
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//
//		}
//
//	}
//
//
//	arr[left] = arr[l];
//	arr[l] = key;
//	quicksort(arr, left, l - 1);
//	quicksort(arr, l + 1, right);
//
//
//
//}
int main()
{

	
	int arr[] = { 6, 1, 2,7,9,3,4,5,10,8 };
	int n = sizeof(arr) / sizeof(int);
	int left = 0;
	int right = n - 1;
	quicksort(arr, left, right);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}