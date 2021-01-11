#include <stdio.h>
#pragma warning(disable:4996)

//
//int Find(int (*a)[5],int row,int col,int x)              //杨氏矩阵，求某一个数是否在该矩阵中
//{
//          int i=0;
//          int j=col-1;
//       while(i<row&&j>=0)
//	   {
//           if(x<a[i][j])
//       {
//             j--;
//         }
//         else if(x>a[i][j])
//        {
//           i++;
//         }
//         else
//        {
//           return 1;
//        }
//
//        }
//          return -1;
//    }
//    int main()
//    { 
//         int a[][5]={
//                    {11,22,33,44,55},
//                    {66,77,88,99,100},
//                    { 111,222,333,444,555},
//                                           };
//
//                     int x=333;
//                     int ret=Find(a,3,5,x);
//                     printf("%d",ret);
//
//                  return 0;
  //   }
int main()
{

	int str[30][30] = {0};
	int i, j;
	int n;
	printf("请输入一个数:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		str[i][0] = 1;
	}


	for (i = 1; i < n; i++)
	{
		for (j = 1; j <=n; j++)
		{
			str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
		}
	}

	for (i = 0; i < n; i++)
	{

		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", str[i][j]);
		}
		printf("\n");
	}







	return 0;
}