/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:29:13 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/27 17:22:20 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b])
		b++;
	while (src[a] && a < nb)
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[10] = "hey ";
	char	b[] = "yay";

	ft_strncat(a, b, 2);
	printf("%s\n", a);
	return (0);
}
*/
