/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:24:49 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/01 16:52:33 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*b;

	if (min >= max)
		return (0);
	b = malloc((max - min) * sizeof(int));
	if (b == 0)
		return (0);
	a = 0;
	while (a < (max - min))
	{
		b[a] = min + a;
		a++;
	}
	return (b);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	*b;

	a = 0;
	b = ft_range(0, 30);
	while (a < 30)
	{
		printf("%d ", b[a]);
		a++;
	}
	free(b);
	return (0);
}
*/
