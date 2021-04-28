#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)

//int PrintTopK(int a£¬int n, int k);


void AdjustDown(heapA, k, i);
void PrintTopK(int *a,int n,int k)
{

	//int k = 10;
	int *heapA = (int*)malloc(sizeof(int)*k);
	for (int i = 0; i < k; i++)
	{
		heapA[i] = a[i];
	}

	for (int i =(k-2)/2; i >= 0; --i)
	{
		AdjustDown(heapA, k, i);
	}

	for (int j = k; j< n; ++j)
	{
		if (heapA[0] < a[j])
		{
			heapA[0] = a[j];
			AdjustDown(heapA, k, 0);
		}
	}


	for (int i = 0; i < k; ++i)
	{
		//printf("666\n");
		printf("%d\n", heapA[i]);
	}

}


void AdjustDown(int *a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n&&a[child] > a[child + 1])
		{
			child++;
		}
		if (a[child] < a[parent])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;

			parent = child;
			child = parent * 2 + 1;
		}
		else{

			break;
		}
	}


}


void TestTopK()
{
	int n = 10000;
	int *a = (int*)malloc(sizeof(int)*n);
	srand((size_t)time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 100000;

	}

	a[500] = 100000 + 5;
	a[1] = 100000 + 1;
	a[2] = 100000 + 2;
	a[6] = 100000 + 6;
	a[7] = 100000 + 7;
	a[8] = 100000 + 8;
	a[9] = 100000 + 9;
	a[3] = 100000 + 3;
	a[4] = 100000 + 4;
	a[110] = 100000 + 11;

	
	PrintTopK(a, n, 10);


}



int main()
{
	TestTopK();

	return 0;
}


//
//void fun(int *a, int k)
//{
//
//}
//void main()
//{
//	int *a = (int*)malloc(sizeof(int));
//
//	fun(a, 5);
//
//
//	return 0;
//}