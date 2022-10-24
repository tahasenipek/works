#include <stdio.h>

char *ft_reverse(char *str)
{
    char *rstr;
    int i;

    i = strlen(str);
    while(!str)
    {
        rstr[i--] = str++;
    }
    rstr[i+1] = '\0';
    return rstr;
}


int main()
{
    char *str;

    str = "taha";
    printf("Ters çıktınız %s..",ft_reverse(str);
}