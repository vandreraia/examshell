/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 23:51:29 by vraia             #+#    #+#             */
/*   Updated: 2018/09/05 00:51:10 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	checkup(char str)
{
	int end;
	char begin;

	begin = 'A';
	end = 25;
	while (begin <= 'Z')
	{
		if (str == begin)
		{
			str += end;
			break;
		}
		end -= 2;
		begin++;
	}
	write(1, &str, 1);
}

void	checklow(char str)
{
	int end;
	char begin;

	begin = 'a';
	end = 25;
	while (begin <= 'z')
	{
		if (str == begin)
		{
			str += end;
			break;
		}
		end -= 2;
		begin++;
	}
	write(1, &str, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			checkup(str[i]);
		if (str[i] >= 'a' && str[i] <= 'z')
			checklow(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
