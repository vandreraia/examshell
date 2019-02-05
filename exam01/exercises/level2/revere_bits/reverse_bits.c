/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 23:47:13 by vraia             #+#    #+#             */
/*   Updated: 2018/09/06 16:31:49 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;

	result = octet;
	while (octet)
	{
		result <<= 1;
		result |= octet & 1;
		octet >>= 1;
	}
	result <<= 1;
	return (result);
}
