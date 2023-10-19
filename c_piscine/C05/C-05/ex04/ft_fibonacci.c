/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:43:30 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/30 18:53:50 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		a = ft_fibonacci(index - 1);
		a += ft_fibonacci(index - 2);
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_fibonacci(3);
	printf("%d", a);
	return (0);
}
*/
