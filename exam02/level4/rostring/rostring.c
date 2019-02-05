/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:27:44 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 18:02:17 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	rostring(char *str)
{
	int i;
	int word;
	int spaces;

	spaces = 0;
	word = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
		spaces++;
	}
	while (str[i] != ' ' && str[i] != '\t')
	{
		i++;
		word++;
	}
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			putc(str[i]);
			i++;
		}
		putc(' ');
	}
	while (spaces < word)
	{
		putc(str[spaces]);
		spaces++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rostring(av[1]);
	putc('\n');
	return (0);
}
