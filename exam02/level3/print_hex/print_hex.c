/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 02:40:23 by vraia             #+#    #+#             */
/*   Updated: 2018/09/12 12:10:55 by vraia            ###   ########.fr       */
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
	char result[10];
	int total;
	int i;
	char a;
	i = 0;
	total = 0;
	while (n > 0)
	{
		result[i] = n % 16;
		n /= 16;
		if (result[i] < 10)
			result[i] += '0';
		else
			result[i] = result[i] -10 + 'a';
		i++;
	}
	while (i >= 0)
	{
		a = result[i];
		putc(a);
		i--;
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
