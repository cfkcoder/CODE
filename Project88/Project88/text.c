#include <stdio.h>
#pragma warning(disable:4996)



void Selectsort(int *arr, int n)
{
	int k = 0;
	int j;
	for (int i = 0; i < n; i++)
	{
		k= i;
		for ( j =k+1; j < n; j++)
		{
			if (arr[k] >arr[j])
			{
				k = j;
			}
		}
		if (i != k)
		{
			int tmp = arr[i];
			arr[i] = arr[k];
			arr[k] = tmp;
		}
	}





}
int main()
{

	int arr[] = { 1, 5, 2, 6, 3, 7, 4, 8, 9 };
	int n = sizeof(arr) / sizeof(int);
	Selectsort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;


}