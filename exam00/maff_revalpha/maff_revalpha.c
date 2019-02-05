/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 19:37:04 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 19:45:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	char upper;
	char lower;
	
	upper = 'Y';
	lower = 'z';

	while(upper >= 'A')
	{
		ft_putchar(lower);
		ft_putchar(upper);
		lower -= 2;
		upper -= 2;
	}
	ft_putchar('\n');

	return (0);
}
