#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void	put_pointer(char *p)
{
	int i;

	i = 0;
	while(i < strlen(p))
	{
		printf("%s\n", p);
		p++;
		i++;
	}
	printf("Program out..");
}
int main()
{
	char *p;
	
	p = malloc(sizeof(char) * strlen(p));	
	p = "taha";
	put_pointer(p);
}
