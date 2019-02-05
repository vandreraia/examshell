/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 18:12:41 by exam              #+#    #+#             */
/*   Updated: 2018/08/31 18:25:10 by exam             ###   ########.fr       */
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
	{
		putchar(argv[i]);
		i++;
	}
	putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		putchar('\n');
	else
		putstr(argv[argc - 1]);
	return (0);
}
			
