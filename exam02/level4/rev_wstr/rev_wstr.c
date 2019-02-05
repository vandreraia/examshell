/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:11:40 by vraia             #+#    #+#             */
/*   Updated: 2018/09/13 01:15:41 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	rev(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i--;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i--;
		j = i;
		i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			putc(str[i]);
			i++;
		}
		i = j;
		putc(' ');	
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev(av[1]);
	putc('\n');
	return (0);
}
