
#include<windows.h>
#pragma warning (disable:4996)


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//void reverse(char* str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left < right)
//	{
//
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	//int k = 0;
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//void reserve(char* str);
void reverse(char arr[])
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}



}

int main()
{

	
	
	
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);
    system("pause");
	return 0;
}

/*int up(int array[], int n)
{
	int i = 0;
	int j = 0;
	int index = 0;
	int temp = 0;
	for (i = 0; i < n - 1; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
		}

	}
}*/
/*int output(int array[],int m)
{
	int i = 0;
	for (i = 0; i < m; i++)
	{
		printf("%d\n", array[i]);
	}
	system("pause");
}



/*
int main()
{
	int array[10] = { 1,2,11,33,22,21 };
	up(array, 10);
	output(array, 10);
	return 0;
}*/