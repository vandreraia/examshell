/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 18:40:15 by exam              #+#    #+#             */
/*   Updated: 2018/08/31 18:55:03 by exam             ###   ########.fr       */
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
	while (argv[i] == ' ' || argv[i] == '\t')
	{
		i++;
	}
	while (argv[i] != ' ' && argv[i] != '\t' && argv[i] != '\0' && argv[i] != '\n' && 
			argv[i] != '\v' && argv[i] != '\r' && argv[i] != '\f')
	{
		putchar(argv[i]);
		i++;
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
