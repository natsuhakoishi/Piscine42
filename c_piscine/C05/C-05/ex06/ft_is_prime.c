/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:06:17 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 19:12:33 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a <= nb / a)
	{
		if ((nb % a) == 0)
			return (0);
		a++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_is_prime(19);
	printf("%d", a);
	return (0);
}
*/
