#include <stdio.h>


int counter_pointer(int	*p)
{
	int	i;

	i = 0;
    while (p[i])
		i++;
	printf("Toplam %d\n", i);
	return (i);
}

int main()
{
	int	i[] = {1, 2, 3};
	counter_pointer(i);
}
