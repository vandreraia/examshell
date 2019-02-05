/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppgdc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 03:31:58 by vraia             #+#    #+#             */
/*   Updated: 2018/09/07 03:42:52 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	higher(int one, int two)
{
	if (one > two)
		return (one);
	else
		return (two);
}

int	pgdc(int one, int two)
{
	int div;
	int high;
	int highe;
	div = 1;
	high = div;
	highe = higher(one, two);
	while (div < highe)
	{
		if (one % div == 0 && two % div == 0)
			high = div;
		div++;
	}
	return (high);
}

int main()
{
	printf("%d", pgdc(21, 49));
	return (0);
}
