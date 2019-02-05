/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:49:52 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 15:10:41 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] != '\0')
		putc('0');
	else
		putc('1');
}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	putc('\n');
	return (0);
}
