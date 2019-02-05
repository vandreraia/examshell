/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 02:40:23 by vraia             #+#    #+#             */
/*   Updated: 2018/09/12 11:05:46 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
void	putc(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	unsigned int num;

	num = 0;
	i = 0;
	while (str[i])
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

void	print_hex(unsigned int n)
{
	int mod;
	int total;

	mod = 0;
	total = 0;
	while (n > 0)
	{
		mod = n % 16;
		n /= 16;
		if (mod < 10)
			putc(mod + '0');
		else
			putc(mod - 10 + 'a');
	}
}

int main(int ac, char **av)
{
	int n;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		print_hex(n);
	}
	putc('\n');
	return (0);
}
