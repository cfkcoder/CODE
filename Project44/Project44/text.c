#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

//
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	return 0;
//}


void reserve_string(char *arr, int len)
{
	char *left = arr;
	char *right = arr + len - 1;
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
	char arr[12];
	gets(arr);
	int len = strlen(arr);

	reserve_string(arr, len);
	printf("%s\n", arr);

	return 0;
}