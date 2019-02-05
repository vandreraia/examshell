/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 20:32:47 by exam              #+#    #+#             */
/*   Updated: 2018/09/07 21:06:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *arr;
	int i;
	int size = 0;
	int temp;

	temp = start;
	while (temp <= end)
	{
		size++;
		temp++;
	}
	i = 0;
	arr = malloc(sizeof(int) * size);
	while (i < size)
	{
		arr[i] = start;
		start++;
		i++;
	}
	return (arr);
}
