#include <stdio.h>

void	ft_bitwise(char c)
{
	printf("%c", c);
	c >>= 1;
	printf("%c", c);
}
int	main()
{
	static char	c;
	c = 115;
	ft_bitwise(c);
}
