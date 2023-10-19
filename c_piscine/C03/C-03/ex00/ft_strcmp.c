/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:33:46 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/26 16:39:45 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;
	if (s1[a] == s2[a])
		return (0);
	else
		return (s1[a] - s2[a]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "hahaha";
	char	s2[] = "hahaha";
	int	a;

	a = ft_strcmp(s1, s2);
	printf("%d", a);
	return (0);
}
*/
