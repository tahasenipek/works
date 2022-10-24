#include <stdarg.h>

int summ(int i, ...)
{
	va_list list;
	int sum;

	va_start(list,i);
	sum = 0;
	while (i)
	{
		sum += va_arg(list,int);
		i--;
	}
	va_end(list);
	return(sum);
}


#include <stdio.h>

int main()
{
	int i;

	i = 5;
	printf("%d", summ(5,4 , 3 , 2, 2 ,2, 213, , ,213,4, ,123, 21));
}
