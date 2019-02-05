/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 18:27:59 by exam              #+#    #+#             */
/*   Updated: 2018/09/06 15:10:49 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
		i++;

	while (i >= 0)
	{
		putchar(argv[i]);
		i--;
	}
	putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 2)
		putchar('\n');
	else
		putstr(argv[1]);
	return (0);
}
