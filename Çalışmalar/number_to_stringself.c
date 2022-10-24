#include <stdio.h>
#include <stdlib.h>
const char* number_to_string(int number)
{
	int count = 0, neg = 0, val;

	if ( number < 0)
	{
		count = 1;
		neg = 1;
		number *= -1;
	}
	val = number;	
	while (val > 0)
	{
		val  /= 10;
		count++;
	}
	
	char *p = calloc(sizeof(char),count + 1);

	if (number == 0)
	{
		p[0] = '0';
	}

	while (count)
	{
		int pee = (number % 10);
		number /= 10;
		p[count - 1] = pee + '0';
		count--;
	}

	return (p);
}

int main()
{
	int c = 123;
	printf("%s", number_to_string(c));
	return(0);
}
