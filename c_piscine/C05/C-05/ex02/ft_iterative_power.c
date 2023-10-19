/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:30:34 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 18:36:53 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 0;
	b = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (++a < power)
		b *= nb;
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_iterative_power(2, 3);
	printf("%d", a);
	return (0);
}
*/
