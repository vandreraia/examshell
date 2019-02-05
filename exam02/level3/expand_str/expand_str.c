/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 03:29:41 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 04:03:34 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	expand(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		{
			putc(str[i]);
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '\0')
			break;
		putc(' ');
		putc(' ');
		putc(' ');
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		expand(av[1]);
	putc('\n');
	return (0);
}
