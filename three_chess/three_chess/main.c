#include <stdio.h>
#include <stdio.h>
#include "chess.h"



void Menu()
{
	printf("#####################################\n");
	printf("#       ��ӭ�����ҵ���������Ϸ�ң�  #\n");
	printf("#####################################\n");
	printf("# 1.Play                    2.Exit  #\n");
	printf("#####################################\n");
	printf("Please Enter Select: > ");


}

int main()
{
	int quit = 0;
	while (!quit)
	{
		int select = 0;
		Menu();
		
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("Enter Error!\n");
			break;

		}

	}
	

	return 0;
}