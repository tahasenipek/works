char ft_charcode(unsigned charcode)
{
	char a;
	a = charcode;
	return (a);
}

#include <stdio.h>

int main()
{
	int i;

	i = 122;
	printf("%c", ft_charcode(i));
}
