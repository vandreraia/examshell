/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:13:03 by exam              #+#    #+#             */
/*   Updated: 2018/09/11 17:32:35 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	int max;
	int i;
	
	i = 0;
	max = tab[i];
	if (len == 0)
		return (0);
	while (len > 0)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
		len--;
	}
	return (max);
}

int main()
{
	int tab[] = {4, 5, 6, 3, 2,9};

	printf("%d", max(tab, 6));
	return (0);
}
/*
 * = Test 1 ===================================================
$> ./bbzyp54kvs0d9c0ct7qg8hrr 
Command './bbzyp54kvs0d9c0ct7qg8hrr ' got killed by a Segmentation fault (Signal -11)
Grade: 0
seg falt?? wtfffff*/
