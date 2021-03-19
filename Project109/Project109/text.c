#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{

	char arr1[] =  "123243545" ;
	char *arr = "232312323";
	int len1 = strlen(arr1);
	int len2 = strlen(arr);
	int n3 = sizeof(arr1);
	int n4 = sizeof(arr);
	printf("%d %d\n", len1, len2);
	printf("%d %d\n", n3, n4);



	return 0;

}