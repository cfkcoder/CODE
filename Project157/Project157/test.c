#include <stdio.h>
#pragma warning(disable:4996)

//
//
//void swap(int* a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//
//	int a = 10;
//	int b = 19;
//	int *a1 = 0x00000000A;
//	printf("%d", *a1);
////swap(a, b);
//	//printf("666");
//
//
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)


void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;


}
void SelectSort1(int *arr, int n)
{

	int end = n - 1;
	for (int i = 0; i < n; i++)
	{
		int begin1 = i;
		int begin2 = i;

		for (int j = i + 1; j <= end; j++)
		{

			if (arr[begin1]>arr[j])
			{

				begin1 = j;

			}
			if (arr[begin2] < arr[j])
			{
				begin2 = j;
			}
		}

		if (i != begin1)
		{
			swap(&arr[begin1], &arr[i]);

		}
		if (end != begin2)
		{
			swap(&arr[begin2], &arr[end]);

		}
		end--;
	}


}

void SelectSort2(int *arr, int n)
{

	int end = n - 1;

	/*for (int i = 0; i < n; i++)
	{*/
	while (end > 0)
	{
		int begin2 = 0;
		for (int j = 1; j <= end; j++)
		{


			/*if (arr[begin1]>arr[j])
			{

			begin1 = j;

			}*/
			if (arr[begin2] < arr[j])
			{
				begin2 = j;
			}
		}

		//if (i != begin1)
		//{
		//	swap(&arr[begin1], &arr[i]);

		//}
		if (end != begin2)
		{
			swap(&arr[begin2], &arr[end]);

		}
		end--;
		/*}*/


	}
	
	


}
int main()
{

	int arr[] = { 5, 2, 1, 9, 8, 4, 3, 7, 6, };
	SelectSort2(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}