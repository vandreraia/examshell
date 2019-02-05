/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 21:02:41 by exam              #+#    #+#             */
/*   Updated: 2018/08/31 21:25:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int size;
	char *dup;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char*)malloc(sizeof(char*)*size);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
