/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:30:28 by vraia             #+#    #+#             */
/*   Updated: 2018/09/13 20:43:48 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	int num = 0;
	int mult = 1;
	int div = 128;
	while (div > 0)
	{
		num = num + (octet/div * mult);
		octet %= div;
		mult *= 2;
		div /= 2;
	}
	return (num);
}
