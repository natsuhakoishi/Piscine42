/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:44:08 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/05 16:36:45 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen_all(int size, char **strs, char *sep)
{
	int	a;
	int	b;
	int	len;

	a = 0;
	len = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
			b++;
		len += b;
		a++;
	}
	b = 0;
	while (sep[b])
		b++;
	len += (b * (size - 1));
	return (len);
}

int	ft_strcpy(char **dest, char *src, int b)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		(*dest)[b] = src[a];
		a++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		b;

	if (size == 0)
		return (malloc(1));
	s = malloc((ft_strlen_all(size, strs, sep) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	a = 0;
	b = 0;
	while (a < size)
	{
		b = ft_strcpy(&s, strs[a], b);
		if (a == (size - 1))
			break ;
		b = ft_strcpy(&s, sep, b);
		a++;
	}
	s[b] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *a[3];

	a[0] = "haha";
	a[1] = "hehe";
	a[2] = "uhuh";
	printf("%s\n", ft_strjoin(3, a, " | "));
	return (0);
}
*/
