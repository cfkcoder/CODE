//#include "seqlist.h"
//#include "slist.h"
//#include "sclist.h"
//#include "dclist.h"
//#include "stack.h"
//#include "queue.h"
#include "bintree.h"
#pragma warning(disable:4996)



int main()
{

	const char *str = "ABC##DE##F##G#H##";
	BinTree bt;
	BinTreeInit(&bt);
	                    //  BinTreeCreate(&bt);
	//bt=BinTreeCreate_1();
	int index= 0;
	bt=BinTreeCreate_2(str,&index);
	

	
	//先序遍历
	printf("VLR:");
	BinTreeVLR(bt);
	printf("\n");
	//中序遍历
	printf("LVR:");
	BinTreeLVR(bt);
	printf("\n");
	//后序遍历
	printf("LRV:");
	BinTreeLRV(bt);
	printf("\n");
	

	
	//层次遍历
	printf("Level:");
	BinTreeLevel(bt);
	printf("\n");
	printf("size = %d\n", BinTreeSize(bt));
	printf("hight=%d\n", Hight(bt));
	printf("\n");
	
	printf("%c\n", BinTreeFind(bt, 'F')->data);
	

	return 0;

}
/*
int main()
{
	CycleSeqQueue Q;
	CycleSeqQueueInit(&Q);
	CycleSeqQueueEn(&Q, 1);
	CycleSeqQueueEn(&Q, 2);
	CycleSeqQueueEn(&Q, 3);
	CycleSeqQueueEn(&Q, 4);
	CycleSeqQueueEn(&Q, 5);
	CycleSeqQueueEn(&Q, 6);
	CycleSeqQueueEn(&Q, 7);
	CycleSeqQueueEn(&Q, 8);
	CycleSeqQueueEn(&Q, 9);
	CycleSeqQueueShow(&Q);
	CycleSeqQueueDe(&Q);
	CycleSeqQueueShow(&Q);
	CycleSeqQueueEn(&Q, 9);
	CycleSeqQueueShow(&Q);



	CycleSeqQueueDestroy(&Q);
	return 0;
}
/*
int main()
{

	SeqQueue Q;
	//SeqQueueEn(&Q,1);
	//SeqQueueShow(&Q);
	SeqQueueInit(&Q);
	SeqQueueEn(&Q, 1);
	SeqQueueEn(&Q, 2);
	SeqQueueEn(&Q, 3);
	SeqQueueEn(&Q, 4);
	SeqQueueEn(&Q, 5);
	SeqQueueEn(&Q, 6);
	SeqQueueEn(&Q, 7);
	SeqQueueEn(&Q, 8);
	SeqQueueEn(&Q, 9);

	SeqQueueShow(&Q);
	SeqQueueDe(&Q);
	SeqQueueShow(&Q);
	printf("Front = %d", SeqQueueFront(&Q));

	return 0;
}
//int main()
//{
//	int x = 0;
//	LinkQueue Q;
//	LinkQueueInit(&Q);
//	LinkQueueEn(&Q,1);
//	LinkQueueEn(&Q, 2);
//	LinkQueueEn(&Q, 3);
//	LinkQueueEn(&Q, 4);
//	LinkQueueEn(&Q, 5);
//	LinkQueueShow(&Q);
//
//	
//	int front_val = 0;
//	while (!LinkQueueEmpty(&Q))
//	{
//		front_val = LinkQueueFront(&Q);
//		LinkQueueDe(&Q);
//		printf("%d 出队.\n", front_val);
//	}
//
//	LinkQueueDestroy(&Q);
//
//	return 0;
//}
//int main()
//{
//
//	LinkStack st;
//	LinkStackInit(&st);
//	int top_val = 0;
//	LinkStackPushFront(&st,1);
//	LinkStackPushFront(&st, 2);
//	LinkStackPushFront(&st, 3);
//	LinkStackPushFront(&st, 4);
//	LinkStackPushFront(&st, 5);
//	LinkStackShow(&st);
//
//	
//	LinkStackPop(&st);
//	LinkStackShow(&st);
//	//top_val = ;
//	LinkStackPop(&st);
//	printf("栈顶=%d \n", LinkStackTop(st));
//
//	LinkStackDestroy(&st);
//    return 0;
//}
//int main()
//{
//	SeqStack st;
//	SeqStackInit(&st);
//	int top_val = 0;
//
//
//
//	SeqStackPush(&st, 1);
//	SeqStackPush(&st, 2);
//	SeqStackPush(&st, 3);
//	SeqStackPush(&st, 4);
//	SeqStackPush(&st, 5);
//	SeqStackShow(&st);
//	//SeqStackTop(&st);
//	
//	while (!SeqStackIsEmpty(&st))
//	{
//		//top_val = SeqStackTop(&st);
//		SeqStackTop( &st, &top_val);
//		SeqStackPop(&st);
//		printf("%d 出栈\n", top_val);
//	}
//	SeqStackDestroy(&st);
//
//	
//	/*SeqStackPop(&st);
//	SeqStackShow(&st);*/
//
//	
//
//
//	return 0;
//}
//int main()
//{
//
//	DCList list;
//	DCListInit(&list);
//	ElemType item;
//	DCListNode *p = NULL;
//	int select = 1;
//
//	while (select)
//	{
//		printf("********************************************\n");
//		printf("* [1]push_back            [2]push_front    *\n");
//		printf("* [3]show_list            [0]quit_list     *\n");
//		printf("* [4]pop_back             [5]pop_front     *\n");
//		printf("* [7]insert_val           [8]              *\n");
//		printf("* [9]erase_val            [10]find         *\n");
//		printf("* [11]length              [13]sort         *\n");
//		printf("* [14]reserve             [15]clear        *\n");
//		printf("* [16]front               [17]back         *\n");
//		printf("********************************************\n");
//		printf("请输入一个数：>");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//
//		switch (select)
//		{
//		case 1:
//			printf("请输入你要插入的数据：<以-1结束>");
//			while (scanf("%d", &item), item != -1)
//			{
//				DCListPushBack(&list,item);
//			}
//			printf("数据尾插成功.\n");
//			break;
//		case 2:
//			printf("请输入你要插入的数据：<以-1结束>");
//			while (scanf("%d", &item),item!=-1)
//			{
//				DCListPushFront(&list,item);
//			}
//			printf("数据头插成功.\n");
//
//			break;
//		case 3:
//			DCListshow(list);
//			break;
//		case 4:
//			DCListPopBack(&list);
//			printf("尾部删除成功.\n");
//			break;
//
//		case 5:
//			DCListPopFront(&list);
//			printf("头部删除成功.\n");
//			break;
//		case 7:
//			printf("请输入你要插入的数：");
//			scanf("%d", &item);
//			DCListInsertByVal(list, item);
//			printf("插入成功.\n");
//			break;
//		case 9:
//			printf("请输入你要删除的数据：");
//			scanf("%d", &item);
//			DCListEraseByVal(list,item);
//			break;
//		case 10:
//			printf("请输入你要查找的数据.\n");
//			scanf("%d", &item);
//			p=DCListFind(list, item);
//			if (p == NULL)
//			{
//				printf("查找数据失败.\n");
//			}
//			else
//			{
//				printf("查找数据成功.\n");
//			}
//			break;
//		case 11:
//			printf(" DCList Length= %d\n",DCListLength(list));
//			break;
//		case 13:
//			DCListSort(list);
//			printf("排序成功.\n");
//			break;
//		case 14:
//			DCListReserve(list);
//			printf("转置成功.\n");
//            break;
//		case 15:
//			DCListClear(&list);
//			printf("删除数据成功.\n");
//			break;
//		case 16:
//			printf("头部数据是%d\n", DCListFront(list));
//			break;
//		case 17:
//			printf("尾部数据是%d\n", DCListBack(list));
//			break;
//		default:
//			printf("命令输入错误，请重新输入.......");
//			break;
//
//		}
//
//		system("pause");
//		system("cls");
//	}
//	DCListDestroy(&list);
//	
//
//
//}
//int main()
//{
//	SCList clist;
//	SCListInit(&clist);
//	SCListNode *p = NULL;
//	ElemType item;
//	int select = 1;
//	int key = 0;
//	bool flag = 0;
//	int find = 0;
//	while (select)
//	{
//		printf("********************************************************\n");
//		printf("*  [1]push_back                     [2]push_front      *\n");
//		printf("*  [3]show_list                     [0]quit_list       *\n");
//		printf("*  [4]pop_back                      [5]pop_front       *\n");
//		printf("*  [6]insert_pos                    [7]insert_val      *\n");
//		printf("*  [8]erase_pos                     [9]erase_val       *\n");
//		printf("*  [10]find                         [11]length         *\n");
//		printf("*  [12]capacity                     [13]sort           *\n");
//		printf("*  [14]reserve                      [15]clear          *\n");
//		printf("*  [16]front                        [17]back           *\n");
//		printf("*  [18]binairy_find                 [19]erase_all      *\n");
//		printf("********************************************************\n");
//		printf("请输入一个数：>");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//	}
//		switch (select)
//		{
//
//		case 1:
//			printf("请输入你要插入的数据：<以-1结束>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SCListPushBack(&clist,item);
//
//			}
//			printf("数据尾插成功.\n");
//			break;
//		/*case 2:
//			printf("请输入你要插入的头部数据：");
//			while (scanf("%d", &item), item != -1)
//			{
//				SCListPushFront(&clist,item);
//			}
//			printf("数据头插成功.\n");
//			break;*/
//		case 3:
//			SCListShow(clist);
//			break;
		/*case 4:
			SCListPopBack();
			printf("尾部删除数据成功.\n");
			break;
		case 5:
			SCListPopFront();
			printf("头部删除数据成功.\n");
			break;
		case 6:
			printf("请输入你要插入的位置：");


			break;
		case 7:
			printf("请输入你要插入的元素：>");
			scanf("%d", &item);
			SCListSort(&clist);
			SCListInsertByVal(&clist,item);
			printf("插入数据成功.\n");
           	break;
		case 8:
			printf("请输入你要插入的位置：");
			

		case 9:
			printf("请输入你要删除的元素：>");
			scanf("%d", item);
			SCListSort(&clist);
			SCListEraseByVal(&clist);
			printf("删除数据的成功.\n");
			break;
		case 10:
			printf("请输入你要查找的关键值：");
			scanf("%d", item);
			p=SCListFind(&clist,item);
			if (p == NULL)
			{
				printf("查找数据失败：");
			}
			else
			{
				printf("查找数据成功");
			}
			break;
		case 11:
			printf(" SCList length=%d\n", SCListLength(clist));

			break;
		case 12:*/

	/*	default:
			printf("命令错误，请重新输入.....\n");
			break;
}

		system("pause");
		system("cls");

}

	return 0;
}*/
//int main()
//{
//
//	SList list;
//	SListInit(&list);
//	SListNode *p=NULL;
//	ElemType item;
//	int pos;
//	int select = 1;
//	int key= 0;
//	bool flag = 1;
//	int find = 0;
//	while (select)
//	{
//		printf("***************************************\n");
//		printf("* [1] push_back        [2]push_front  *\n");
//		printf("* [3] show_list        [0]quit_system *\n");
//		printf("* [4] pop_back         [5]pop_front   *\n");
//		printf("* [6] insert_pos       [7]insert_val  *\n");
//		printf("* [8] erase_pos        [9]erase_val   *\n");
//		printf("* [10] find            [11]length     *\n");
//		printf("* [12] capacity        [13]sort       *\n");
//		printf("* [14] reserve         [15] clear     *\n");
//		printf("* [16] front           [17]back       *\n");
//		printf("* [18] binary_find     [19]erase_all  *\n");
//		printf("***************************************\n");
//		printf("请选择：>");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//		switch (select)
//		{
//		case 1:
//			printf("请输入你要插入的数据<以-1结束>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushBack(&list, item);
//			}
//			printf("尾部插入数据成功.\n");
//
//			break;
//		case 2:
//			printf("请输入你要插入的头部数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushFront(&list, item);
//			}
//			printf("头插成功........\n");
//				break;
//		case 3:
//			SListShow(list);
//			break;
//		case 4:
//			SListPopBack(&list);
//			printf("尾部删除数据成功.......\n");
//
//			break;
//		case 5:
//			SListPopFront(&list);
//			printf("头部删除数据成功.......\n");
//			break;
//		case 6:
//			printf("请输入你要插入的位置：>");
//			scanf("%d", &pos);
//			printf("请输入你要插入的元素：>");
//			scanf("%d", &item);
//			if (flag)
//			{
//				printf("插入数据成功.....\n");
//			}
//			else
//			{
//				printf("插入数据失败");
//			}
//			break;
//		case 7:
//			printf("请输入你要插入的元素：>");
//			scanf("%d", &item);
//			SListSort(&list);
//			SListInsertByVal(&list,item);
//			printf("插入数据成功：\n");
//			
//			break;
//		case 8:
//			printf("请输入你要插入的位置：>");
//			scanf("%d", &pos);
//			printf("删除数据成功.........\n");
//			break;
//		case 9:
//			printf("请输入需要删除的元素：>");
//			scanf("%d", &item);
//			SListEraseByVal(&list, item);
//			printf("删除数据成功.........\n");
//			break;
//		case 10:
//			printf("请输入你要查找的关键值：");
//			scanf("%d", &item);
//			p = SListFind(list, item);
//			if (p == NULL)
//			{
//				printf("数据查找失败.\n");
//			}
//			else
//			{
//				printf("查找数据成功.\n");
//			}
//
//			break;
//		case 11:
//			printf("SList Length=%d\n ", SListLength(list));
//			break;
//		case 12:
//			break;
//		case 13:
//			SListSort(&list);
//			printf("链表排序成功.......\n");
//			break;
//		case 14:
//			SListReserve(&list);
//			printf("转置成功.\n");
//
//			break;
//		case 15:
//			SListClear(&list);
//			printf("删除数据成功；\n");
//			break;
//		case 16:
//			printf("表头元素为：%d\n", SListFront(list));
//			break;
//		case 17:
//			printf("表尾元素为：%d\n", SListBack(list));
//			break;
//		case 18:
//
//			printf("请输入你要查找的数：");
//			scanf("%d", &item);
//			if (find == -1)
//			{
//				printf("没有找到.......\n");
//			}
//			else
//			{
//				printf("%d在链表中的位置是[%d]\n", item, find);
//			}
//
//			break;
//		case 19:
//			printf("请输入删除的元素：");
//			scanf("%d", &key);
//			//SListEraseAll(&list, key);
//
//			break;
//
//		default:
//			printf("命令出错，请重新输入......");
//			break;
//		}
//
//		system("pause");
//		system("cls");
//		
//
//	}
//	SListDestroy(&list);
//
//	return 0;
//}

//int main()
//{
//	SeqList list;
//  SeqListInit(&list);
//	
//	
//
//	ElemType item;
//	int pos ;
//	int select = 1;
//	int x = 0;
//	bool flag=1;
//	//int find=0;
//	while (select)
//	{
//		printf("***************************************************\n");
//		printf("*  [1] push_back        [2] push_front            *\n");
//		printf("*  [3] show_list        [0] quit_system           *\n");
//		printf("*  [4] pop_back         [5] pop_front             *\n");
//		printf("*  [8] erase_pos        [9] erase_val             *\n");
//		printf("*  [6] insert_pos       [7] insert_val            *\n");
//		printf("*  [10] find            [11] length               *\n");
//		printf("*  [12] capacity        [13] sort                 *\n");
//		printf("*  [14] reverse         [15] clear                *\n");
//		printf("*  [16] front           [17] back                 *\n");
//		printf("   [18] binary_find     [19] erase_all            *\n");
//		printf("***************************************************\n");
//		printf("请选择：>");
//		scanf("%d", &select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("请输入你要插入的尾部数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				//SeqListPushBack(&list, item);
//			}
//			printf("尾插成功......\n");
//			break;
//
//		case 2:
//			printf("请输入你要插入的头部数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				 // SeqListPushPront(&list, item);
//			}
//			printf("头插成功......\n");
//			break;
//		case 3:
//			//SeqListShow(&list);
//			break;
//		case 4:
//			//SeqListPopBack(&list);
//			printf("尾部删除数据成功.......\n");
//			break;
//		case 5:
//			//SeqListPopFront(&list);
//			printf("头部删除数据成功........\n");
//			break;
//		case 6:
//			printf("请输入要插入的位置:>");
//			scanf("%d", &pos);
//			printf("请输入要插入的元素:>");
//			scanf("%d", &item);
//		//flag=SeqListInsertByPos(&list, pos, item);
//			if (flag)
//			{
//				printf("插入数据成功......\n");
//			}
//			else
//				printf("数据插入失败......\n");
//			break;
//		case 7:
//			printf("请输入要插入的元素:>");
//			scanf("%d", &item);
//		//	SeqListSort(&list);
//			//flag=SeqListInsertByVal(&list, item);
//			if (flag)
//			{
//				printf("插入数据成功........\n");
//
//			}
//			else
//			{
//				printf("插入数据失败........\n");
//			}
//			break;
//		case 8:
//			printf("请输入你要删除的位置:>");
//			scanf("%d", &pos);
//			//SeqListEraseByPos(&list, pos);
//			printf("删除数据成功..........\n");
//			break;
//		case 9:
//			
//			printf("请输入需要删除的元素:>");
//			scanf("%d", &item);
//			//SeqListEraseVal(&list, item);
//			printf("删除数据成功..........\n");
//            break;
//		case 10:
//			printf("请输入要查找的关键值;");
//			scanf("%d", &item);
//		//	pos = seqlistfind(&list, item);
//			if (pos == -1)
//			{
//				printf("数据查找失败.\n");
//			}
//			else
//			{
//				printf("数据查找成功.\n");
//			}
//
//
//			break;
//		case 11:
//			//printf("SeqList Length=%d\n", SeqListLength(&list));
//			break;
//		case 12:
//			//printf("SeqList Capacity=%d\n ",SeqListCapacity(&list));
//			break;
//		case 13:
//			//SeqListSort(&list);
//			printf("顺序表排序成功.....\n");
//			break;
//		case 14:
//			//SeqListReserve(&list);
//			printf("转置成功.\n");
//			break;
//		case 15:
//			//SeqListClear(&list);
//			break;
//		case 16:
//			//SeqListFront(&list);
//				break;
//		case 17:
//			//SeqListBack(&list);
//			break;
//		//case 18:
//		//	//SeqListSort(&list);
//		//	printf("请输入你要查找的数：");
//		//	scanf("%d", &item);
//		//	//find=SeqListBinary_Find(&list,item);
//		//	if (find == -1)
//		//	{
//		//		printf("没有找到......\n");
//		//	}
//		//	else
//		//	{
//		//		printf("%d在链表中的位置是[%d]\n", item,find);
//		//	}
//		//	break;
//		case 19:
//			//SeqListErase_all(&list);
//			break;
//				
//
//		default:
//			printf("命令出错，请重新输入....");
//			break;
//
//		}
//		system("pause");
//		system("cls");
//	}
//
//	//SeqListDestroy(&list);
//	return 0;
//
//
//
//}