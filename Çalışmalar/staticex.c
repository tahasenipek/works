#include <stdio.h>

int	ft_staticex(char *c)
{
	static char c = 0;
	
	c = *c;
	if (1)
	{
		c = c | 1;
		printf("%s", c);
	}
	return(0);
}

int main()
{
	char *c = "taha";
	ft_staticex(c);
}
