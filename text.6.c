
#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

int main()
{

int n, m, i, j;
int a[5000];
int b[5000];
int c[5000];
scanf("%d %d",&n,&m);

for (i = 0; i<n; i++)
{
	scanf("%d", &a[i]);
}
for (j = 0; j<m; j++)
{
	scanf("%d", &b[j]);
}
for (i = 0; i<n; i++)
{
	c[i] = a[i];
}
int k = n;
for (j = 0; j<m; j++)
{
	c[k++] = b[j];
}

for (i = 0; i<m + n - 1; i++)
{
	for (j = 0; j<m + n - i - 1; j++)
	{
		if (c[j]>c[j + 1])
		{
			int temp = c[j + 1];
			c[j] = c[j + 1];
			c[j + 1] = temp;
		}
	}
}

for (i = 0; i<m + n; i++)
{
	printf("%d ", c[i]);
}

return 0;
}