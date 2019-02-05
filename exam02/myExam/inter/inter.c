/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:31:58 by exam              #+#    #+#             */
/*   Updated: 2018/09/09 20:14:48 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putc(char c)
{
    write (1, &c, 1);
}

int		check(char x, char *s1, int i)
{
	int j;

	j = 0;
	while (s1[j])
	{
		if (j == i)
			j++;
		if (s1[j] == x)			//im checking with future characters aswell
			return (0);			//i should just check with char before the x
		j++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if ((s1[i] == s2[j]) && (check(s1[i], s1, i) == 1))
			{
				putc(s1[i]);
				break;
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	putc('\n');
	return (0);
}
