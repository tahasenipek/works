#include <stdlib.h>
#include <stdio.h>

const char* number_to_string(int number)
{
	int count = 0, neg = 0, val;

	if (number < 0)
	{
		neg = 1;
		count = 1;
		number *= -1;
	}

	val = number;

	while (val > 0)
	{
		val /= 10;
		count++;
	}

	char *p = calloc(sizeof(char), count + 1);

	if (number == 0)
	{
		p[0] = '0';
	}

	while (count)
	{
		int pee = (number % 10);
		p[count - 1] = pee + '0';
		number /= 10;
		count--;
	}

	if (neg)
		p[0] = '-';

	return p;
}
int main()
{
	int a = 123;
	printf("%s", number_to_string(a));
	return (0);
}

