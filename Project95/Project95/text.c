#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)



void  Bubblesort(int *arr, int n)
{
	bool swap = true;
	while (swap)
	{
		swap = false;
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;


				swap = true;

			}
		}
	}

}


int main()
{

	int arr[] = { 1, 4, 5, 2, 3, 7, 9, 8 };
	int n = sizeof(arr) / sizeof(int);
	Bubblesort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");



	return 0;
}