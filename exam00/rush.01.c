/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.0X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:28:52 by vraia             #+#    #+#             */
/*   Updated: 2018/08/25 20:28:31 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putx(char x)
{
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
}

void	ft_putblank(char b)
{
	while (b > 2)
	{
		ft_putchar(' ');
		b--;
	}
}

void	ft_puty(char y, char x)
{
	while (y > 2)
	{
		ft_putchar('*');
		ft_putblank(x);
		if (x > 1)
		{
			ft_putchar('*');
		}
		y--;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_putchar('/');
	ft_putx(x);
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	ft_puty(y, x);
	if (y > 1)
	{
		ft_putchar('\\');
		ft_putx(x);
		if (x > 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}
