#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)


int* fun(int *Arr,int Arrsize,int bb,int *returnsize)
{

	int bbsize= 0;
	int k1 = 0;
	int bbnum = 0;
	int bbk = bb;
	while (bbk)
	{
		bbsize++;
		bbk /= 10;

	}

	int i= Arrsize - 1;
	int j1 = 0;
	int n = bbsize > Arrsize ? bbsize+1 : Arrsize+1;
	int *retrr = malloc(sizeof(int)*n);

	while (i>= 0 || bb)
	{
		int Aunm = 0;
		

		bbnum= bb % 10;
		bb /= 10;

		if (i >=0)
		{
			Aunm = Arr[i--];
		}
	
		int ret = bbnum + Aunm + j1;


		if (ret > 10)
		{

		   ret-= 10;
		   j1 = 1;
		
		}
		else
		{
			j1 = 0;
		}

		
		retrr[k1++] = ret;
		
		
	}

	if (j1 == 1)
	{


		retrr[k1++] = 1;

	}
	
	*returnsize =k1;
	int left = 0;
	int right = k1 - 1;
	while (left<right)
	 {
		int tmp = retrr[left];
		retrr[left] = retrr[right];
		retrr[right] = tmp;

		left++;
		right--;

	 }
	

	return retrr;

}
int main()
{

	int a[] = { 1,2,0,0 };
	int b = 34;
	int a1 = 0;
	int *p=fun(a,4,b,&a1);
	//printf("%d ", a1);

	for (int i = 0; i < a1; i++)
	{
		printf("%d ", p[i]);

	}

	printf("\n");

	







	return 0;
}