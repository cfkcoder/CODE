#include <stdio.h>
#pragma warning(disable:4996)



int findnum(int(*a)[3], int row,int line,int x)
{
	int i = 0, j = line - 1;
	while (i<row&&j >= 0)
	{

		
		if (x > a[i][j])
		{
			i++;

		}
		else if (x < a[i][j])
		{
			j--;
		}
		else{
			return 1;
		}
	}

	return 0;
	
	
	

}
int main()
{
	int a[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, {11,22,33} };
	if (findnum(a, 4, 3, 23))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
	}
	




	return 0;
}