#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{

	//char *str1 = "12345";
	//char *str2 = "12345";
	//printf("%d\n", memcmp(str1, str2,6));

	//

	//int i = 10;
	//printf("%d %d %d\n", i++, i++, i++);

 //   i = 10;
	//printf("%d %d %d", ++i, ++i, ++i);

	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++&&++b&&d++;

	int j = 0;
	j = a++ || ++b || d++;

	/*printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);*/
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);






	return 0;
}