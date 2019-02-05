/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:45:18 by vraia             #+#    #+#             */
/*   Updated: 2018/09/13 20:50:59 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char num = 0;
	int div = 128;
	int mult = 16;
	while (div >= 16)
	{
		num = num + (div/octet * mult);
		octet %= div;
		div /= 2;
		mult *= 2;
	}
	mult = 1;
	while (div > 0)
	{
		num = num + (div/octet * mult);
		octet %= div;
		div /= 2;
		mult *= 2;
	}

