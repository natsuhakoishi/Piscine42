/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:47:49 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/27 17:51:41 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "haha";
	int	b;

	b = ft_strlen(a);
	printf("%d", b);
	return 0;
}
*/
