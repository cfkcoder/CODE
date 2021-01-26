#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main()
{

	int len = 4;
	char *str = malloc(len + 1);
	int i = 0;


	char ch = getchar();
	while (ch != '\n')
	{

		if (i == len)
		{
			/*char *tmp = malloc(len * 2 + 1);
			strncpy(tmp, str, len);
			free(str);
			str = tmp;*/
			str = (char*)realloc(str, len * 2 + 1);
			len *= 2;
		}
		str[i++] = ch;
		ch=getchar();



	}

	str[i] = '\0';


	printf("%s\n", str);
	free(str);


	return 0;
}