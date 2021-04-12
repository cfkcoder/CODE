#include <stdio.h>
#pragma warning(disable:4996)
#include <ctype.h>

int main()
{
	char ch;
	while (scanf("%c", &ch) == 1)
	{
		putchar(tolower(ch));
		getchar();
	}


	return 0;
}