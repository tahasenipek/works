#include <stdio.h>

int main()
{
    char *i;
    
    
    i[0] = '\0';
    
    if (i[0] != 1)
        return(printf("yok\n"));
    return(printf("%c\n", *i));
}
