/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:40:43 by exam              #+#    #+#             */
/*   Updated: 2018/09/04 14:50:44 by vraia            ###   ########.fr       */
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
	int word;

	i = 0;
	word = 0;
	while (argv[i] != '\0')
		i++;
	while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\0')
		i--;
	while (argv[i] != ' ' && argv[i] != '\t' && i > 0 && argv[i] != '\n' &&
			argv[i] != '\v' && argv[i] != '\r' && argv[i] != '\f')
	{
		i--;
		word++;
	}
	while (word >= 1)
	{
		while (argv[i] == ' ')
			i++;
		putchar(argv[i]);
		i++;
		word--;
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
