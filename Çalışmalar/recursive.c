#include <stdio.h>

long int func(long int num)
{
	long int  res = 0;

	if (num <= 0)
	{
		printf("hata oluştu..\n");
	}
	else if (num == 1)
	{
		return (num);
	}
	else
	{
		res = num * func(num -1);
		return res;
	}
	return (0);
}

int main()
{
	int num = 25;
	int long fact = func(num);

	if (fact > 0)
		printf("%d nin çarpımı : %ld\n", num, fact);
   return (0);
}   
