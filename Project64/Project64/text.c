#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)



void reserve(char *str)
{

	int left = 0;
	int right =8;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;

		left++;
		right--;
		
	}

}

int main()
{

	char str[] = "asdfghjkj";
    reserve(str);
	printf("%s",str);
	printf("\n");



	return 0;

}