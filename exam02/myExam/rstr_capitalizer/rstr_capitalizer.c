/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 19:43:39 by exam              #+#    #+#             */
/*   Updated: 2018/09/09 21:32:49 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putc(char c)
{
	write (1, &c, 1);
}
/*
int 	length (char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		i++;
	printf("len: %d\n", i);
	return (i);
}*/

void	rstr_capitalizer(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i ] == ' ' || str[i ] == '\t')
		{
			putc(str[i]);
			i++;
		}
		len = i;
		while (str[len] != ' ' && str[len] != '\t' && str[len] != '\0')
			len++;
		len--;
		while (i < len)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			putc(str[i]);
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			putc(str[i]);
			i++;
		}
		else
		{
			putc(str[i]);
			i++;
		}
//		write(1, " flaG: ", 5);
	}
}

int 	main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
		putc('\n');
	else
	{
		while (i < ac)
		{
			rstr_capitalizer(av[i]);
			putc('\n');
			i++;
		}
	}
}
