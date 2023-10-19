/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:17:42 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/19 17:31:00 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_iterative_factorial(13);
	printf("%d", a);
	return (0);
}
*/
