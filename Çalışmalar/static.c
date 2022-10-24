int ft_func()
{
    static int a = 0;
    a++;
    return(a);
    
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_func());
    printf("%d\n", ft_func());
}
