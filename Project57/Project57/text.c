#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)




char* IntToStr(int value)
{

	//static char str[11];
	char *str = (char*)malloc(11);
	int i = 0;
	while (value)
	{
		int num = value % 10;
		str[i++] = num+'0';

		value /= 10;
	}

	int begin = 0;
	int end = i - 1;
	while (begin < end)
	{
		int temp = str[begin];
		
		str[begin] = str[end];
		str[end] = temp;


		begin++;
		end--;

	}

	str[i] = '\0';
	return str;


}
int main()
{

	int a = 12345;
	char *p=IntToStr(a);
	

	int b = 234;
	char *p1 = IntToStr(b);
	printf("%s\n", p);
	printf("%s\n", p1);
	/*free(p);
	free(p1);
*/



	return 0;
}