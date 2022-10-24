#include <stdio.h>
#include <string.h>
int th_square_sum(const int *value, size_t count)
{
    int i = 0;
    int j = 0;
    
    while(i < count)
    {
        j += value[i] * value[i];
        i++;
    }
    return(j);
}

int main()
{
    int a[] = {1, 2, 3, 4};
    printf("%d", th_square_sum(a, 4));
    return(0);
}

