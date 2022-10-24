#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *th_strrev(char *str)
{
	int i = 0;
	char *p;
	char c;
	int s = strlen(str)/2;
    p = str;

	while ( i < s )
	{
		c = p[i];
		p[i] = p[strlen(str) - i - 1];
		p[strlen(str) - i - 1] = c;
		i++;
	}
	return(str);
}
int main()
{
	char a[] = "hello";
	printf("%s", th_strrev(a));
	return(0);
}
