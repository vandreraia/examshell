/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 20:19:19 by exam              #+#    #+#             */
/*   Updated: 2018/09/05 14:48:33 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int first;
	int second;
	int result;
	char operand;

	if (argc != 4)   //esqueceu new line:
		return (0);
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	operand = argv[2][0];
	if (operand == '+')
		result = first + second;
	if (operand == '-')
		result = first - second;
	if (operand == '*')
	{
		result = first * second;
		/*while (second > 0)
		{
			result += first;
			second--;
		}*/
	}
	if (operand == '/')
		result = first / second;
	if (operand == '%')
		result = first % second;
	printf("%d\n", result);
	return (0);
}
