/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:49:23 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/04 16:52:48 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

/*
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
*/
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		a;

	a = 0;
	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof(*str));
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

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*s;
	int			a;

	a = 0;
	s = malloc((argc + 1) * sizeof(*s));
	if (s == 0)
		return (0);
	while (a < argc)
	{
		s[a].size = ft_strlen(argv[a]);
		s[a].str = argv[a];
		s[a].copy = ft_strdup(s[a].str);
		a++;
	}
	s[a].str = 0;
	return (s);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	t_stock_str	*str = ft_strs_to_tab(argc, argv);

	a = 0;
	if (str == NULL)
	{
		printf("Error.");
		return (1);
	}
	while (str[a].str != NULL)
	{
		printf("Size: %d\n", str[a].size);
		printf("String: %s\n", str[a].str);
		printf("Copy: %s\n", str[a].copy);
	}
	return (0);
}*/
