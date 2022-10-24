#include <stdio.h>
#include <stdlib.h>

char	*ft_all(char *s, char *t)
{
	char *total;

	total = malloc(sizeof(char) * 9);
	total = s;
   	total += 5;
	total = t;
	total[9] = '\0';
	return (total);
}	


int main()
{
	char *s = "taha";
	char *t = "okey";
	
	ft_all(s, t);
}
