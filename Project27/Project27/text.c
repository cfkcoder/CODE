#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)



char* fun(char(*arr)[20], char *max)
{
      max = arr[0];
	  int i = 0;
	  for (i = 1; i < 5; i++)
	  {
		  if (strlen(max) < strlen(arr[i]))
		  {
			  max = arr[i];
		  }
	  }

	  return max;

}
int main()
{




	char str[5][10] = { "asdfgh", "qwer", "zxc", "poiuy", "bhtfdes" };
	char *p = NULL;
	char *max=fun(str, p);
	printf("%s\n", max);


	return 0;
}