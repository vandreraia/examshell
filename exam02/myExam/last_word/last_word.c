/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 19:08:47 by exam              #+#    #+#             */
/*   Updated: 2018/09/07 19:41:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putc(char c)
{
    write (1, &c, 1);
}

void	last_word(char *str)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		i--;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != 0)
	{
		i--;
		word++;
	}
	i++;
	while (word > 0)
	{
		putc(str[i]);
		word--;
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	putc('\n');
	return (0);
}
