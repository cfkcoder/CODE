#include <stdio.h>
#pragma warning(disable:4996)


#pragma pack(6)

typedef struct stu{
	char a;
	double c;
	int n;

}stu;
int main()
{
	

	int n = sizeof(stu);
	printf("%d\n", n);


	return 0;
}