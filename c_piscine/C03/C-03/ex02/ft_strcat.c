/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:34:05 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/21 18:26:11 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[10] = "hey ";
	char	b[] = "yay";

	ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}
*/
