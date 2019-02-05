/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 00:55:26 by vraia             #+#    #+#             */
/*   Updated: 2018/09/05 23:32:33 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		while (s2[j] != s1[i] && s2[j] != '\0')
			j++;
		i++;
	}
	if (s1[i] == '\0')
	{
		i = 0;
		while (s1[i])
		{
			ft_putchar(s1[i]);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}
