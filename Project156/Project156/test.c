#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//#include <iostream>
//using namespace std;
#pragma warning(disable:4996)


void PrintArray(int *arr, int n);
void SelectSort(int *arr, int n);



void Swap(int* a,int* b)
{

	int tmp = *a;
	*a = *b;
	*b = tmp;
	
}

void PrintArray(int* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

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
		/*printf("gab:%d->", gab);
		PrintArry(arr, n);*/

	}



}

//
//void SelectSort1(int *arr, int n)
//{
//
//	int end = n - 1;
//	int i = 0;
//	for (int i = 0; i < n; i++)
//	{
//
//		int begin1 = i;
//		int begin2 = i;
//
//		for (int j = i + 1; j <= end; j++)
//		{
//
//			if (arr[begin1]>arr[j])
//			{
//
//				begin1 = j;
//
//			}
//
//
//			
//		}
//
//		if (i != begin1)
//		{
//			swap(&arr[begin1], &arr[i]);
//
//		}
//
//		for (int j = i + 1; j <= end; j++)
//		{
//
//
//			if (arr[begin2] < arr[j])
//			{
//				begin2 = j;
//			}
//
//		}
//
//		if (end < i)
//		{
//			break;
//		}
//		if (end != begin2)
//		{
//			swap(&arr[begin2], &arr[end]);
//
//		}
//
//
//		end--;
//
//	}
//
//}

void SelectSort1(int *a, int n)
{

	int begin =0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; ++i)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i]>a[maxi])
			{
				maxi = i;
			}
		}

		Swap(&a[begin], &a[mini]);
		if (maxi==begin)
		{

			maxi = mini;

		}
		Swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}

}
void SelectSort(int *arr, int n)
{

	
	for (int i = 0; i < n; i++)
	{
		int k = i;

		for (int j = i + 1; j <n; j++)
		{

			if (arr[k]>arr[j])
			{

				k = j;

			}
			
		}
		if (i != k)
		{
			Swap(&arr[k], &arr[i]);

		}

	}

}



int  GetMidIndex(int *arr, int left, int right)
{


	int mid = (left + right) >> 1;


	if (arr[left] < arr[mid])
	{

		if (arr[mid]<arr[right])
		{

			return  mid;

		}

		else if (arr[left]>arr[right])
		{

			return left;
		}
		else{
			return right;
		}

	}
	else   //a[left]>=a[mid]
	{

		if (arr[mid] > arr[right])
		{
			return mid;
		}
		else if (arr[left] < arr[right])
		{

			return  left;

		}
		else{

			return right;

		}

	}




}




//前后指针法（快排）
void QuickSortDP(int *arr, int left, int right)
{

	if (left >= right)
	{
		return;
	}


	int prev = left - 1;
	int cur = left;


	int mid = GetMidIndex(arr, left, right);

	Swap(&arr[mid], &arr[right]);

	int key = right;
	while (cur != right)
	{

		/*if (arr[cur]>key)
		{
		cur++;
		}*/

		if (arr[cur] < arr[key] && ++prev != cur)
		{


			Swap(&arr[cur], &arr[prev]);


		}
		cur++;

	}

	Swap(&arr[++prev], &arr[key]);
	key = prev;

	QuickSortDP(arr, left, key - 1);
	QuickSortDP(arr, key + 1, right);


}

void TestOP()
{

	srand((size_t)time(0));
	const int N=100000;
	int *a1 = (int*)malloc(sizeof(int)*N);
	int *a2 = (int*)malloc(sizeof(int)*N);
	int *a3 = (int*)malloc(sizeof(int)*N);
	int *a4 = (int*)malloc(sizeof(int)*N);
	int *a5 = (int*)malloc(sizeof(int)*N);
	int *a6 = (int*)malloc(sizeof(int)*N);


	for (int i = 0; i < N; i++)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a2[i];
		a4[i] = a3[i];
		a5[i] = a4[i];
		a6[i] = a5[i];
	}


	int first = clock();
	SelectSort(a1, N);
	int second = clock();

	int first1 = clock();
	SelectSort1(a2, N);
	int second1 = clock();

	int first2 = clock();
	ShellSort(a4, N);
	int second2 = clock();

	int t1 = clock();
	QuickSortDP(a4, 0, N - 1);
	int t2 = clock();

	printf("SelectSort:%d \n", second-first);
	printf("SelectSort1:%d \n", second1-first1);
	printf("ShellSort:%d \n", second2 - first2);
	printf("QuickDP: %d  \n", t2 - t1);


	free(a1); 
	free(a2); 
	free(a3); 
	free(a4);
	free(a5);
	free(a6);


}
//void TestSort()
//{
//
//	int arr[] = { 33,32,31,30,29,28,27,26,25,24};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	
//	//int result = second - first;
//	//
//	//PrintArray(arr, n);
//
//	
//
//	/*int first1 = clock();
//	SelectSort1(arr, n);
//	int second1 = clock();
//	int result1 = second - first;
//	printf("SelectSort1:%d \n", result1);*/
//	//PrintArray(arr, n);
//
//
//}
//
//void TestSort1()
//{
//
//	int arr[] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	
//	int result = second1 - first1;
//
//
//}

int main()
{


	TestOP();
	/*TestSort();
	TestSort1();*/
	return 0;

}