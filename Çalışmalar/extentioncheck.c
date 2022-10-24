/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extentioncheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:11:24 by msenipek          #+#    #+#             */
/*   Updated: 2022/07/01 17:34:36 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int extention(char *str)

{
    int i;
    int c;

    i = 0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    c = i;
        if (*--str == 'r')
            i++;
        if (*--str == 'e')
            i++;
        if (*--str == 'b')
            i++;
        if  (*--str == '.')
            i++;
        if (c + 4 == i)
            return(1);
        else
            ;
}

int main()
{
    char *c = "taha.ber";
    if (extention(c) == 1)
        printf("Uzantınız doğru");
    else
        printf("Uzantınız yanlış.");
    
}