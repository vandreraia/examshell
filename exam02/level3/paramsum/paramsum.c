/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 02:45:12 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 03:29:18 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	printnbr(int nbr)
{
	int i;
	char print[10];

	i = 0;
	while (nbr > 0)
	{
		print[i] = nbr % 10 + '0';		
		nbr /= 10;
//		printf("%c", print[i]);
		i++;
	}
	i--;
	while (i >= 0)
	{
		putc(print[i]);
		i--;
	}
}
int main(int ac, char **av)
{
	if (ac > 1)
		printnbr(ac - 1);
	putc('\n');
	return (0);
}
