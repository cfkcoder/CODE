#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


int *addToArrayForm(int *A, int ASize, int K, int* returnSize)
{
	int num = K;
	int size = 0;
	while (num)
	{
		size++;
		num /= 10;
	}
	int n = size > ASize ? size+1 : ASize+1;
	int *retArr = malloc(sizeof(int)*n);

	int next = 0;
	int Ai = ASize - 1;
	int Kunm;
	
	int reti = 0;
	while (Ai >= 0 || K > 0)
	{
		Kunm = K % 10;
		int Anum = 0;
		if (Ai >= 0)
		{
			Anum = A[Ai--];
		}


		K /= 10;
		int ret = Kunm + Anum + next;
		if (ret >= 10)
		{
			ret -= 10;
			next = 1;

		}
		else
		{
			next = 0;
		}

		retArr[reti++] = ret;
	}


	if (next == 1)
	{
		retArr[reti++] = 1;
	}

	*returnSize = reti;
	int left = 0; 
	int right = reti - 1;
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}

	return retArr;
}



int main()
{

	int arr[] = { 2,1,5 };
	int n = sizeof(arr) / sizeof(int);
	int K = 806;
	int returnsize = 0;
	int *str=addToArrayForm(arr, n, K, &returnsize);

	for (int i = 0; i < returnsize; i++)
	{
		printf("%d ", str[i]);
	}
	printf("\n");
	free(str);

	return 0;
}