/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:59:26 by msenipek          #+#    #+#             */
/*   Updated: 2022/03/29 18:09:53 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int sumnumbers(int s, ...)
{
    int i;
    va_list ag;
    int result;
    
    va_start(ag, s);
    i = 0;
    result = 0;
    while (i < s)
    {
        result += va_arg(ag, int);
    }
    va_end(ag);
    return (result);
}

int main()
{
    printf("%d", sumnumbers(7, 1, 2, 3, 4));
}

/*
int	sayilar(int s, ...)
{
	va_list	list;
	int	i;

	
	i = 0;
    int result = 0;
	va_start (list, s);
	while (i < s)
	{
        result += va_arg(list, int);
        i++;
	}
	va_end (list);
	return (result);
}

int main()
{
    printf("%d",sayilar(1, sayilar));
}





#include <stdlib.h>
char* cters(int s, ...)
{
    va_list list;
    int i;
    char *result;
    
    result = (char *)malloc(sizeof(char) * s + 1);
    i = 0;
    va_start(list, s);
    while(i < s)
    {
        result[i] = va_arg(list, int);
        i++;
        
    }
    va_end(list);
    return(result);
}

int main()
{
    printf("%s", cters(0, 1, 2, 3, 4));
}

*/
