/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:53:36 by vraia             #+#    #+#             */
/*   Updated: 2018/09/07 00:52:43 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

int		check(char s1,char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

void	puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putc(str[i]);
		i++;
	}
}

int		strcount(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	char *str;
	int j;
	int c;
	c = strcount(s1);
	j = 0;
	i = 0;
	while (s1[i])
	{
			if (check(s1[i], s2) == 1)
				j++;
			i++;
	}
	i = 0;
	if (c == j)
		puts(s1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	putc('\n');
	return (0);
}
