#include <stdio.h>


void	matrix(int satır, int sutun)
{	
	int a;

	a = sutun;
	while (satır-- > 0)
	{
		while(a-- > 0)
		{	
			printf("X");	
		}
		a = sutun;
		printf("\n");
	}		
}


int main()
{
	matrix(10, 10);
	return(0);	
}	
