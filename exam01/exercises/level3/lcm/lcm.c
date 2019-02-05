/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 01:37:53 by vraia             #+#    #+#             */
/*   Updated: 2018/09/07 03:31:31 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*unsigned int lcm(unsigned int a, unsigned int b)
{
	int lcm;
	int result1;
	int result2;
	if (!a || !b)
		return (0);
	lcm = 2;
	result1 = a;
	result2 = b;
	while (lcm < 2000000000)
	{
		result1 = a%lcm;
		result2 = b%lcm;
		while (a%lcm == 0 || b%lcm == 0)
		{
			lcm *= lcm;
		}
		lcm++;
	}
	return (0);
}*/
int main()
{
	printf("%d", lcm(21, 52));
	return (0);
}
