/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 03:37:11 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/27 17:40:51 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a])
		a++;
	while (src[b])
		b++;
	if (size <= a)
		return (b + size);
	while (src[c] && (a + c) < (size - 1))
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (b + a);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[10] = "Oh My ";
	char	b[10] = "God!";
	int	result = ft_strlcat(a, b, 20);

	printf("Total word: %s\n", a);
	printf("Length: %u\n", result);
	return (0);
}
*/
