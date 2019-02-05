/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 00:53:07 by vraia             #+#    #+#             */
/*   Updated: 2018/09/07 01:02:24 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit;
	int d128;

	bit = octet;
	d128 = 128;
	while (d128 > 0)
	{
		if (bit >= d128)
		{
			write(1, "1", 1);
			bit %= d128;
		}
		else
			write(1, "0", 1);
		d128 /= 2;
	}
}

int main()
{
	print_bits(255);
	return (0);
}