#include <stdio.h>
#pragma warning(disable:4996)


void PrintArry(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);

	}
	printf("\n");
}
void ShellSort(int *arr, int n)
{

	int gab = n;

	while (gab > 1)
	{
		gab /= 2;
		if (gab == 0)
		{
			gab = 1;
		}
		for (int i = 0; i <= n - gab - 1; ++i)
		{

			int end = i;
			int tmp = arr[end + gab];
			while (end >= 0)
			{
				if (tmp < arr[end])
				{
					arr[end + gab] = arr[end];
					end -= gab;

				}
				else{
					break;
				}

			}

			arr[end + gab] = tmp;

		}
		printf("gab:%d->", gab);
		PrintArry(arr, n);

	}
		

	
}

//void Insertsort(int *arr, int n)
//{
//	int gap;
//	for (int i = 1; i < n; ++i)
//	{
//		int k = i-1;
//		int tmp = arr[i];
//
//		while (k >= 0 && tmp < arr[k])
//		{
//			arr[k+1] = arr[k];
//			k--;
//		}
//		arr[k + 1] = tmp;
//
//	}
//
//}

TestShellSort()
{
	int arr[] = { 9, 1, 2, 5, 7, 4, 8, 6, 3, 5, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	ShellSort(arr, n);
	//PrintArry(arr, n);



}
int main()
{

	TestShellSort();
	


	return 0;


}