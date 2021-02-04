#include <stdio.h>
#pragma warning(disable:4996)




void insertsort(int *a, int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int tmp = a[i];
		j = i - 1;
		while (j >= 0 && tmp < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = tmp;
	}
}
int main()
{
	int a[] = { 5, 4, 3, 6, 7, 8, 3, 2, 1 };
	int n = sizeof(a) / sizeof(int);
	insertsort(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}


	return 0;
}