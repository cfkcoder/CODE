#include<stdio.h>
#include <errno.h>
#include <string.h>
#pragma warning(disable:4996)


int main()
{
	FILE *fout = fopen("text.c", "r"); 
	if (fout == NULL)
	{
		printf("���ļ�ʧ��!",strerror(errno));

	}


	char str[11];
	fgets(str, 11, fout);
	printf("%s\n", str);

	fclose(fout);







	return 0;
}