#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#pragma warning(disable:4996)


void Test()
{
	FILE *fout = fopen("bbb.text", "r");
	if (fout == NULL)
	{
		printf("�ļ��򿪶�ʧ��: %s\n", strerror(errno));
		exit(1);
		//return;
	}

}

int main()
{
	Test();
	printf("666\n");
	



	return 0;
}