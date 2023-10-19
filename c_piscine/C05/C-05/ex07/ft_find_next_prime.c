/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:14:50 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 19:21:16 by yyean-wa         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb) && nb <= 2147283648)
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_find_next_prime(7);
	printf("%d", a);
	return (0);
}
*/
