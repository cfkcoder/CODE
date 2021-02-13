#include <stdio.h>
#pragma warning(disable:4996)

//
// typedef struct Student{
//
//	 char name[20];
//	int age;
//	char address[30];
//
//	
//}S,SS,*SSS;
//
// typedef struct Student Stu;
//
//int main()
//{
//
//	Stu a = { "Tom", 20, "ÉÂÎ÷Î÷°²" };
//	S b = {"Jack",22,"ÉÂÎ÷±¦¼¦"};
//	SS c = { "Rose", 26, "Ö¥¼Ó¸ç" };
//	SSS p = &a;
//
//	Stu d = { "wade", 37, "Âõ°¢ÃÜ" };
//
//
//	
//	printf("%s\n", a.address);
//	printf("%s\n", b.address);
//	printf("%d\n", a.age);
//	printf("%d\n", b.age);
//	printf("%s\n", a.name);
//	printf("%s\n", b.name);
//	printf("%s\n", c.name);
//	printf("%s\n", c.address);
//	printf("%d\n", c.age);
//
//	printf("\n");
//	printf("\n");
//
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->address);
//
//
//	printf("\n");
//	printf("\n");
//	printf("\n");
//
//	printf("%s\n", d.name);
//	printf("%d\n", d.age);
//	printf("%s\n", d.address);
//	
//
//	
// 
//
//	return 0;
//}
//


struct Student{


	char name[20];
	int age;
	char address[30];


}a = {"Lin",29,"New York"};

int main()
{
	struct Student a = { "Lfk", 31, "New York City" };
	printf("%s\n", a.name);
	printf("%d\n", a.age);
	printf("%s\n", a.address);


	return 0;
}