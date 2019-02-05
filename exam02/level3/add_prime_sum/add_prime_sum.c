/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 01:51:52 by vraia             #+#    #+#             */
/*   Updated: 2018/09/13 11:37:16 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (c[i])
	{
		res = res * 10 + c[i] -'0';
		i++;
	}
	return (res);
}

int check_prime(unsigned int n)
{
	int i;

	i = 2;
	if (n == 2)
		return (1);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	prime_sum(unsigned int n)
{
	int total;

	total = 0;
	while (n > 1)
	{
		if (check_prime(n) == 1)
			total = total + n;
		n--;
	}
//	printf("%d", total);
}

int main(int ac, char **av)
{
	unsigned int n;

	if (ac == 2)
	{
		if (av[1][0] == '-' || av[1][0] == '-' || av[1][0] == '0')
			putc('0');
		else
		{
			n = ft_atoi(av[1]);
			prime_sum(n);
		}
	}
	else
		putc('0');
	putc('\n');
	return (0);
}
