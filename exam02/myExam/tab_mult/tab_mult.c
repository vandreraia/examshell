/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:08:58 by exam              #+#    #+#             */
/*   Updated: 2018/09/10 14:16:27 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putc(char c)
{
	write (1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int x;
	int n;

	n = 0;
	x = 0;
	i = 0;
	while (str[i])
	{
		n = str[i] - 48;
		x *= 10;
		x += n;
		i++;
	}
	return (x);
}

void	itoa(int n)
{
	char c[10];
	int i;
	int mod;

	i = 0;
	while (n > 0)
	{
		c[i] = n % 10;
		n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		putc(c[i] + '0');
		i--;
	}
}

void	tab(int mult)
{
	int i;
	int result;

	result = 0;
	i = 1;
	while (i <= 9)
	{
		putc(i + 48);
		write(1, " x ", 3);
		itoa(mult);
		write(1, " = ", 3);
		result = i * mult;
		itoa(result);
		putc('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	int x;

	if (ac == 1)
		putc('\n');
	if (ac ==2)
	{
		x = atoi(av[1]);
		tab(x);
	}
	return (0);
}
