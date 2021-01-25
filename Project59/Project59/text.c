#include <stdio.h>
//#pragma warning(disable:4996)

int main()
{

	int a[11] = {1,3,7,9,22};
	int b[6] = {2,8,10,17,33,44};

	int i = 0;
	int j = 0;
	int n = 5, m = 6;
	/*scanf("%d %d", &n, &m);
	for (i = 0; i<n; i++)
	{
		scanf("%d ", &a[i]);
	}

	for (j = 0; j<m; j++)
	{
		scanf("%d ", &b[j]);
	}*/


	for (j = n; j<m + n; j++)
	{

		int i = j - 1;
		int temp = b[j - n];
		while (i >= 0 && temp<a[i])
		{
			
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = temp;
	}



	for (int i = 0; i<m + n; i++)
	{
		printf("%d ", a[i]);

	}
	return 0;
}





