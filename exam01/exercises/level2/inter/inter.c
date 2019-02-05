/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:50:54 by vraia             #+#    #+#             */
/*   Updated: 2018/09/04 23:18:04 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *first, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (first[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	inter(char *first, char *second)
{
	int i;
	int j;

	i = 0;
	while (first[i] != '\0')
	{
		if (check(first, first[i], i) == 1)
		{
			j = 0;
			while (second[j] != '\0')
			{
				if (second[j] == first[i])
				{
					write(1, &first[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}
int		main(int ac, char **av)
{
	if (ac == 3)
		inter (av[1], av[2]);
	putchar('\n');
	return (0);
}
