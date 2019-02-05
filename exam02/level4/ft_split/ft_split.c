/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 01:16:10 by vraia             #+#    #+#             */
/*   Updated: 2018/09/13 01:51:18 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **split;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
		i++;
	split = (char**)malloc(sizeof(split) * i + 1);
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			split[j][k] = str[i];
			i++;
			k++;
		}
		k++;
		split[j][k] = '\0';
		printf("%s", split[j]);
		j++;
	}
	return (split);
}

int main()
{
	char *str = "olha que bunda da porra";
	ft_split(str);
	return (0);
}
