#include <stdio.h>
#pragma warning(disable:4996)


void swap(int &a, int &b)
{

	int tmp = a;
	a = b;
	b = tmp;

}

void singleNumbers(int *arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				/*int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/

				//swap((arr + j), (arr + j + 1));
				swap(arr[j], arr[j + 1]);
				
				//swap(&arr[j], &arr[j + 1]);

			}

		}
	}

}
int main()
{



	int arr[] = { 1, 2, 10, 4, 1, 4, 3, 3 };
	int n = sizeof(arr) / sizeof(int);
	singleNumbers(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");









	return 0;
}