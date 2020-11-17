#include"mine.h"

static void Menu()
{
	printf("########################\n");
	printf("## 欢迎来到扫雷游戏！   \n");
	printf("########################\n");
	printf("## 1.play       2.exit##\n");
	printf("##########################\n");
	printf("Please Select=> ");
}

int main()
{
	int quit = 0;
	do{
		int select = 0;
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			printf("当前游戏已经结束...再来一把？\n");
			break;
		case 2:
			quit = 1;
			printf("再见，欢迎下次再来玩\n");
			break;
		case 3:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (!quit);
return 0;
}