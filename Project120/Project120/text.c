#include <stdio.h>
#include <errno.h>
#include <string.h>
#pragma warning(disable:4996)


int main()
{

	FILE *fin = fopen("text.cc", "w");
	if (fin == NULL)
	{
		printf("�ļ�дʧ��!", strerror(errno));
	}

	int i = 0;
	for (; i < 10; i++)
	{
		fputc('1', fin);
	}


	fclose(fin);


	return 0;

}