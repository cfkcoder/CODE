#include <stdio.h>
#pragma warning(disable:4996)




void mergesort(int *arr, int L, int M, int R)
{

	int LEFT_SIZE = M - L;
	int RIGHT_SIZE = R - M+1;
	/*int left[M - L];
	int right[RIGHT_SIZE];*/
	int left[10];
	int right[10];
	for (int i = L; i < M; i++)
	{
		left[i - L] = arr[i];
	}
	
	for (int j = M; j <=R; j++)
	{
		right[j - M] = arr[j];
	}

	/*for (int i = 0; i < M - L; i++)
	{
		printf("%d ", left[i]);
	}
	printf("\n");

	for (int j = 0; j < R - M+1; j++)
	{
		printf("%d ", right[j]);
	}
	printf("\n");*/
	int i = 0, j = 0, k =L;
	while (i < LEFT_SIZE&&j < RIGHT_SIZE)
	{
		if (left[i] < right[j])
		{
			arr[k] = left[i];
			k++;
			i++;
		}
		else
		{
			arr[k] = right[j];
			k++;
			j++;
		}
	}
	while (i < LEFT_SIZE)
	{
		arr[k] = left[i];
		k++;
		i++;
	}
	while (j < RIGHT_SIZE)
	{
		arr[k] = right[j];
		j++;
		k++;
	}


}


void merge(int *arr, int L,int R)
{
	if (L == R)
	{
		return;
	}
	int M = (L + R) / 2;
	merge(arr, L, M);
	merge(arr, M + 1, R);
	mergesort(arr, L,M+1,R);

}


int main()
{

	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int L = 0;
	int M = 4;
	int R = 7;
	merge(arr,L,R);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	

	return 0;
}