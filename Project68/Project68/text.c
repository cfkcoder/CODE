#include <stdio.h>
#include <math.h>
#include <malloc.h>
#pragma warning(disable:4996)


int* addToArrayForm(int *Arr, int Arrsize, int k, int *returnsize)
{

	int sum = 0;
	int num = 0;
	for (int i = 0; i < Arrsize; i++)
	{

	   sum += Arr[i] * pow(10, (Arrsize - i - 1));

	}

	sum = sum + k;
	int sum1 = sum;
	while (sum1)
	{
		num++;
		sum1 /= 10;

	}
	     *returnsize = num;
		 int *p = (int*)malloc(sizeof(int)* (num));

	for (int j = *returnsize-1; j >= 0; j--)
	{

		p[j] = sum % 10;
		sum /= 10;

	}
	
	return p;

}
int main()
{

	int arr[] = {1};
	int Arrsize = sizeof(arr)/sizeof(int);
	int returnsize;
	int k = 0;
	int *a;
	a=addToArrayForm(arr,Arrsize,k,&returnsize);
	for (int k = 0; k < returnsize; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");
	free(a);
	return 0;
}