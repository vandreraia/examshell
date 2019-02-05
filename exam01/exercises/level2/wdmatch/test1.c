/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:34:05 by vraia             #+#    #+#             */
/*   Updated: 2018/09/05 23:53:59 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		putc(str[i]);
		i++;
	}
}

void		wdmatch(char *str1, char *str2)
{
	while (*str1  && *str2 )
	{
		if (*str1 == *str2)
			str1++;
		str2++;
	}
	if (*str1 == '\0')
		putstr(*str1);
}

int				main(int argc, char **argv)
{
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
