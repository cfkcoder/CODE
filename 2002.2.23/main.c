#include"chess.h"

void Meau()
{
	printf("#################################\n");
	printf("#################################\n");
	printf("####��ӭ�����ҵ���������Ϸ�ң�###\n");
	printf("####1.play              2.exit###\n");
	printf("please enter select:>");
}
int main()
{
	int quit = 0;
	while (!quit){
	int select = 0;
     Meau();
	 scanf("%d", &select);
	 switch (select){
	 case 1:
		 Game();
		 break;
	 case 2:
		 quit = 1;
		 break;
	 default:
		 printf("enter error!\n");
		 break;
	 }
	}
	return 0;
}
