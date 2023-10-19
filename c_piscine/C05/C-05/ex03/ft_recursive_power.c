/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:38:34 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 18:41:41 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_recursive_power(2, 3);
	printf("%d", a);
	return (0);
}
*/
