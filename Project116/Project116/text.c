#include<stdio.h>
#include <errno.h>
#include <string.h>
#pragma warning(disable:4996)


int main()
{
	FILE *fout = fopen("text.c", "r"); 
	if (fout == NULL)
	{
		printf("打开文件失败!",strerror(errno));

	}


	char str[11];
	fgets(str, 11, fout);
	printf("%s\n", str);

	fclose(fout);







	return 0;
}