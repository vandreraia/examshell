/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:54:36 by vraia             #+#    #+#             */
/*   Updated: 2018/09/05 16:55:16 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_power_of_2(unsigned int n)
{
	int pwr;

	pwr = 2;
	while (pwr <= 536870912)
	{
		if (n == pwr)
			return (1);
		pwr *= 2;
	}
	return (0);
}

int itis_power_of_2(int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n%2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}

int main()
{
	printf("%d", itis_power_of_2(214748364));
	return (0);
}
