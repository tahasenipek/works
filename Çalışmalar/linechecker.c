#include <stdio.h>

int linechecker(char *s)
{
	int	i;
	int	c;
	

	i = 0;
	while(*s != '\0')
	{
		if (*s == '\n')
			i++;
		*s++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	int i;
	int c;

	i = 0;
    
	i = linechecker("taha\ntadsad\n");
	printf("Satır sayınız %d", i);
	printf("Sutun sayınız %d", c);
    
}
