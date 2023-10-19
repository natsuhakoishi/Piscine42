/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:15:31 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/19 18:52:17 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	a;
	int	limit;

	limit = n;
	a = 0;
	while (src[a] != '\0' && a < limit)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < limit)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
