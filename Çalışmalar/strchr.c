char *ft_strchr(const char *s, int a)
{
    while (*s)
    {
        if (*s == (char)a)
           return((char *)s);
        s++;
    }
    if (*s == (char)a)
        return((char *)s);
    return (0);
}


#include <stdio.h>
#include <string.h>

int main()
{
    char    str[] = "sonrasıyemekads";
    
    printf("%s", ft_strchr(str, 'y'));
    return (0);
}
