/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 03:02:42 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/26 15:13:27 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	char	*b;

	b = str;
	if (*to_find == '\0')
		return (str);
	while (*b)
	{
		a = 0;
		if (*b == to_find[0])
		{
			while (b[a] == to_find[a] && to_find [a])
				a++;
			if (to_find[a] == '\0')
				return (b);
		}
		b++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Haha is me";
	char	b[] = "";
	char		*result = ft_strstr(a, b);

	if (result != NULL)
	{
		printf("Found %s in %s.\n", b, a);
	}
	else
	{
		printf("Not found.");
	}
	return (0);
}
*/
