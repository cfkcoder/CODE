#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#pragma warning(disable:4996)


int main()
{

	/*char a = -1;
	printf("%d\n", a);
*/


	FILE* fout = fopen("tasdasfdsadfsdfa", "r");
	if (fout == NULL)
	{
		printf("文件打开失败 %s\n", strerror(errno));
		exit(-1);

	}


	char ch = fgetc(fout);
	printf("%c\n", ch);


	return 0;


}