#include <stdio.h>
#pragma warning(disable:4996)






void Insertsort(int *arr, int n)
{
	int k = 0;
	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		int temp = arr[i];
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;

	}



}
int main()
{

	int arr[] = { 1, 5, 2, 6, 7, 3, 8, 4, 9 };
	int n = sizeof(arr) / sizeof(int);
	Insertsort(arr,n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}