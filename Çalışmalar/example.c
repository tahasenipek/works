#include <stdio.h>

int main()
{
    printf("getpid %d", getpid());
    while(1)
    {
        pause();
    }
    return(0);
}
