/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <tahasenipek@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:49:26 by msenipek          #+#    #+#             */
/*   Updated: 2022/08/04 16:38:06 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char	result;

	i = 128;
	result = 0;
	while(i > 0)
	{
		result = result * 2 + (octet % 2);
		printf("%s", result);
		octet /= 2;
		i /= 2;
	}
	return(result);
}

int main(void)
{
	unsigned char octet = 'D';
	unsigned char c;
	c = reverse_bits(octet);
	write(1, &c, 1);
}

