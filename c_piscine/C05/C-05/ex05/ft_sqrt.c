/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:57:49 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 19:05:14 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	a;

	a = 1;
	if (nb == 0)
		return (0);
	while (nb > a * a)
		a++;
	if (nb == a * a)
		return (a);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	long	a;

	a = ft_sqrt(2147483647);
	printf("%ld", a);
	return (0);
}
*/
