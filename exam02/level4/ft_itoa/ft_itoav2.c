/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:30:29 by vraia             #+#    #+#             */
/*   Updated: 2018/09/11 02:30:29 by vraia            ###   ########.fr       */
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
	temp = nbr;
	while (temp > 0)
	{
//		printf("%d, %d \n", i, temp);
		temp /= 10;
		i++;
	}
/*	if (nbr < 0)
	{
		nbr *= -1;
		i++;
		arr[0] = '-';
	}
*/
	arr = (char*)malloc(sizeof(char*) * i);
	temp = i;
	i--;
	while (i >= 0)
	{
		arr[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	arr[temp] = '\0';
	printf("%s", arr);
	return (arr);
}

int main()
{
	ft_itoa(123);
//	itoa(123);
	return (0);
}
