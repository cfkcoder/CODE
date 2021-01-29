#include <stdio.h>
#pragma warning(disable:4996)



int removeDuplicates(int *a, int n)
{
	if (n < 2)
	{

		return n;

	}

	int dst = 0, src = 1;
	while (src < n)
	{
		if (a[dst] != a[src])
		{

			dst++;
			a[dst] = a[src];
			src++;

		}
		else
		{
			src++;
		}
	}

	return dst + 1;

}



int main()
{


	/*int a[] = { 1, 2, 3, 4, 4, 4, 5, 6 };
	int n = sizeof(a) / sizeof(int);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] != 4)
		{
			a[j++] = a[i];
		}

	}
	for (int k = 0; k < j; k++)
	{
		printf("%d ", a[k]);
	}
*/

	/*int a[] = { 1, 2, 2, 3, 4, 4, 5, 6, 7 };
	int n = sizeof(a) / sizeof(int);
	int i = 0;
	int j = 0;
	while (i<n)
	{
		while (a[i] == a[i + 1])
		{
			i++;
		}
		a[j++] = a[i++];
	}
	for (int k = 0; k < j; k++)
	{
		printf("%d ", a[k]);
	}
	
*/


	int a[] = { 1, 3, 2, 2, 3, 4, 5, 6, 6, 7 };
	int n = sizeof(a) / sizeof(int);
	removeDuplicates(a, n);


	return 0;
}
