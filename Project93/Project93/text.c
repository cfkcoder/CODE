#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main()
{

	FILE *fout = fopen("text.cpp", "r");
	if (fout == NULL)
	{

		printf("���ļ�ʧ��:%d\n", errno);
		exit(-1);


	}
	fclose(fout);



	return 0;
}