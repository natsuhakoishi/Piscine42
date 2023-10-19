/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:59:10 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/01 17:37:48 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	a = 0;
	while (a < (max - min))
	{
		(*range)[a] = min + a;
		a++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	*b;

	a = ft_ultimate_range(&b, 0, 30);
	printf("%d\n", a);
	while (a > 0)
	{
		printf("%d ", *b);
		b++;
		a--;
	}
	free(b);
}
*/
