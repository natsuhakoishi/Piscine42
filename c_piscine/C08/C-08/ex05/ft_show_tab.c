/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:21:38 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/10/04 16:52:10 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

/*
#include <stdlib.h>
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

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
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_string(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str != NULL)
	{
		write_string(par[a].str);
		ft_putnbr(par[a].size);
		write(1, "\n", 1);
		write_string(par[a].copy);
		a++;
	}
}
/*
int	main(int argc, char **argv)
{
	t_stock_str *s;

	s = ft_strs_to_tab(argc, argv);
	ft_show_tab(s);
	return (0);
}*/
