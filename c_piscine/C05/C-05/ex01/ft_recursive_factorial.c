/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:25:17 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 18:28:17 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_recursive_factorial(5);
	printf("%d", a);
	return (0);
}
*/
