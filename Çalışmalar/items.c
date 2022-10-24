#include <stdio.h>

int	ft_include(const int *arr, size_t size, int item)
{
    int i;
    
    i = 0;
	while(size-- != 0)
	{
		if (arr[i] == item)
		{
			printf("Doğru");
			return 1;
		}
        i++;
	}
    printf("Yanlış");
	return (0);
}


int	main()
{
	const int arr[] = {1, 2, 3, 4};
	ft_include(arr, sizeof(arr), 3);
}
