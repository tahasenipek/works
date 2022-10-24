#include <stdio.h>
#include <stdlib.h>

union car
{
	char name[50];
	int price;
} car1, car2, *car3;


int main()
{
	car1.price = 101;
	car2.price = 102;

	printf("First car is %d\n", car1.price);
	printf("Second car is %d\n", car2.price);
	return (0);
}
