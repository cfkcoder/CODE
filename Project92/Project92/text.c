#include <stdio.h>
#include <stdlib.h>
//#include <errno.h>
#include <string.h>


#pragma warning(disable:4996)


int main()
{

	FILE *fout = fopen("text.cpp", "r");
	if (fout == NULL)
	{

		printf("打开文件失败:%d\n", errno);
		exit(-1);


	}
	fclose(fout);



	//FILE *fout = fopen("text.cpp", "r");
	//if (fout == NULL)
	//{
	//printf("打开文件失败:%s\n", strerror(errno));
	//exit(-1);

	//}
	//fclose(fout);
	//


	//FILE *fout = fopen("text.c", "r");
	//if (fout == NULL)
	//{
	//	printf("打开文件失败 : %s\n", strerror(errno));
	//}
	//char ch = fgetc(fout);
	//while (ch != EOF)
	//{
	//	printf("%c", ch);
	//	ch = fgetc(fout);

	//}

	//printf("\n");

	//fclose(fout);

	/*FILE *fout = fopen("text.cpp", "w");
	if (fout == NULL)
	{

		printf("打开文件失败: %s\n", strerror(errno));
		exit(-1);



	}
	


	fclose(fout);
*/


	return 0;
}