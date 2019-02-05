/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:14:28 by exam              #+#    #+#             */
/*   Updated: 2018/09/07 18:29:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putc(char c)
{
    write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;
	int rep;

	i = 0;
	rep = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			rep = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			rep = str[i] - 96;
		else
		{
			putc(str[i]);
			rep = 0;
		}
		while (rep > 0)
		{
			putc(str[i]);
			rep--;
		}
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	putc('\n');
	return (0);
}
