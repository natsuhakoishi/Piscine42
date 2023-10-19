/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:25:58 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/27 17:00:17 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	a;
	int	b;
	char s1[] = "hahaha";
	char s2[] = "hahaaa";

	a = ft_strncmp(s1, s2, 5);
	b = strncmp(s1, s2 ,5);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}
*/
