#include <stdio.h>
#include <stdlib.h>

typedef	struct
{
	char	*av;
	int		*i;
}t_strct;


int	main()
{
	t_strct	*new;
	char av[20] = "taha senipek";
	int	 *i;

	i = malloc(sizeof(int));
	new = malloc(sizeof(t_strct));
	*i = 23;

	new->av = av;
	new->i = i;


	printf("av %s\n", new->av);
	printf("i == %d\n", *new->i);
}