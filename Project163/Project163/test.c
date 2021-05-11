#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Stack.h"


#pragma warning(disable:4996)





void Swap(int *a, int *b)
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
	printf("\n");

	
}
//
//void QuickSortHole(int* arr, int left,int right)
//{
//
//	int begin = left;
//	int end = right;
//
//	int hole = left;
//	while (begin < end)
//	{
//
//		while (begin<end&&arr[end] >= arr[hole])
//		  {
//			end--;
//	      }
//
//
//		arr[hole] = arr[end];
//		hole = end;
//
//
//		while (begin<end&&arr[begin] <= arr[hole])
//		  {
//			begin++;
//	   	  }
//		arr[hole] = arr[begin];
//
//		hole = begin;
//
//
//   }
//
//
//}



//挖坑法（快排）
void QuickSortHole(int* arr, int left, int right)
{

	if (left >= right)
	{
		return;
	}
	int begin = left;
	int end = right;

	int  key= arr[begin];

	while (begin < end)
	{

		while (begin<end && arr[end] >= key)
		{
			--end;
		}


		arr[begin] = arr[end];
		

		while (begin<end && arr[begin] <= key)
		{
			++begin;
		}
		arr[end] = arr[begin];


	}

	int hole = begin;
	arr[hole] = key;

	QuickSortHole(arr, left, hole - 1);
	QuickSortHole(arr, hole + 1, right);


}



int  GetMidIndex(int *arr,int left,int right)
{

	int mid = (left + right) >> 1;

  
		if (arr[left] < arr[mid])
			{

			if (arr[mid]>arr[right])
			{

				return  right;

			}

			else if (arr[mid] < arr[right])
			{

				return mid;
			}
			else{
				return left;
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
void QuickSortDP(int *arr, int left,int right)
{
	
	if (left >= right)
	{
		return;
	}

	int prev = left - 1;
	int cur = left;

	//int mid = GetMidIndex(arr, left, right);

	//Swap(&arr[mid], &arr[right]);

	int key = right;
	while (cur!=right)
	{
		
		/*if (arr[cur]>key)
		{
			cur++;
		}*/

		if (arr[cur] < arr[key]&&++prev!=cur)
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



void QuickSortNonR(int *arr, int left, int right)
{

	Stack st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);

	while (!EmptyStack(&st))
	{

		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);


		/*if (begin >= right)
		{
		return;
		}*/

		int prev = begin - 1;
		int cur = begin;

		//int mid = GetMidIndex(arr, left, right);

		//Swap(&arr[mid], &arr[right]);

		int key = end;
		while (cur != end)
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

		if (key + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, key + 1);
		}
		if (begin < key - 1)
		{
			StackPush(&st, key - 1);
			StackPush(&st, begin);

		}


	}

	StackDestroy(&st);


}






void Test()
{

	int arr[] = {9,1,8,2,7,3,6,4,5,19,18,17,16,15,14,13,12,11};
	//QuickSortHole(arr, 0,sizeof(arr) / sizeof(arr[0])-1);
	//QuickSortDP(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	QuickSortNonR(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));


}


void Test1()
{

	const int n = 100000;
	srand((unsigned)time(NULL));

	int *a1 = (int *)malloc(sizeof(int)*n);
	int *a2 = (int *)malloc(sizeof(int)*n);
	int *a3 = (int *)malloc(sizeof(int)*n);
	int *a4 = (int *)malloc(sizeof(int)*n);
	int *a5 = (int *)malloc(sizeof(int)*n);
	int *a6 = (int *)malloc(sizeof(int)*n);
	int *a7 = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		a1[i] = rand() % 100000;
		a2[i] = a1[i];
		a3[i] = a2[i];
		a4[i] = a3[i];
		a5[i] = a4[i];
		a6[i] = a5[i];
		a7[i] = a6[i];
		
	}

	int begin1 = clock();
	QuickSortHole(a1, 0, n - 1);
	int end1 = clock();

	int begin = clock();
	QuickSortDP(a1, 0, n-1);
	int end = clock();

	printf("%d\n", end1-begin1);
	printf("%d\n", end - begin);


   // PrintArray(a1, sizeof(a1) / sizeof(a1[0]));

		
		free(a1);
		free(a2);
		free(a3);
		free(a4);
		free(a5);
		free(a6);
		free(a7);

}

int main()
{

	Test();
	//Test1();
	


	return 0;
}