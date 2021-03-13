#include <stdio.h>
#pragma warning(disable:4996)

 typedef enum color{


	YELLOW,
	BULE,
	RED,
	GREEN,
	PINK


}color_t;




int main()
{

	/*enum color a = PINK;
	printf("%d\n", a);
*/

	color_t a = PINK;
	enum color b = RED;
	enum color c = 6;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);


	return 0;


}