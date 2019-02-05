/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:30:29 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 02:43:51 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_itoa(int nbr)
{
	char *arr;
	int i;
	int temp;
	int check;

	i = 0;
	check = 0;
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		check = 1;
		nbr *= -1;
		i++;
	}
	temp = nbr;
	while (temp > 0)
	{
		//        printf("%d, %d \n", i, temp);
		temp /= 10;
		i++;
	}
	arr = (char*)malloc(sizeof(char*) * i);
	temp = i;
	i--;
	if (check == 1)
	{
		while (i >= 0)
		{
			arr[i] = nbr % 10 + '0';
			nbr /= 10;
			i--;
		}
		arr[0] = '-';
	}else
	{
		while (i >= 0)
		{
			arr[i] = nbr % 10 + '0';
			nbr /= 10;
			i--;
		}
	}
	arr[temp] = '\0';
	printf("%s", arr);
	return (arr);
}

int main()
{
	ft_itoa(-1646534523);
	//    itoa(123);
	return (0);
}
