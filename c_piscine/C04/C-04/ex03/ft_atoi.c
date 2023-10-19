/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:04:03 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/28 16:44:43 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	sign = 1;
	result = 0;
	while (str[a] && ((str[a] >= 9 && str[a] <= 13) || str[a] == 32))
		a++;
	while (str[a] && (str[a] == '+' || str[a] == '-'))
	{
		if (str[a] == '+')
			sign = -1;
		a++;
	}
	while (str[a] && (str[a] >= '0' && str[a] <= '9'))
	{
		result = (str[a] - '0') + (result * 10);
		a++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	int		b;

	b = ft_atoi("  ---+--+1234ab567");
	printf("%d", b);
	return (0);
}
*/
