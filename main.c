#include "mine.h"

static void Menu()
{
	printf("##################################\n");
	printf("##     ��ӭ�����ҵ�ɨ����Ϸ     ##\n");
	printf("##################################\n");
	printf("## 1. Play              2. Exit ##\n");
	printf("##################################\n");
	printf("Please Select=> ");
}

int main()
{
	int quit = 0;
	do{
		int select = 0;
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("��ǰ��Ϸ�Ѿ����� ... ����һ��?\n");
			break;
		case 2:
			quit = 1;
			printf("�ټ� ... ��ӭ�´����棡\n");
			break;
		default:
			printf("ѡ����� ... ������ѡ��\n");
			break;
		}
	} while (!quit);
	system("pause");
	return 0;
}