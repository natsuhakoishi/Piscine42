/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:06:00 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/05 16:40:11 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		a;

	a = 0;
	while (src[a])
		a++;
	len = a;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < len)
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Haha";
	char	*b = ft_strdup(a);

	printf("%s", b);
	free(b);
	return (0);
}
*/
