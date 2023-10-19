/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:31:41 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/16 16:51:49 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a)
{
	int	b;
	int	c;

	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		b = a / 10;
		c = a % 10;
		ft_putchar(b + '0');
		ft_putchar(c + '0');
	}
}

void	ft_print_comb2(void)
{
	int	d;
	int	e;

	d = 0;
	while (d <= 99)
	{
		e = d + 1;
		while (e <= 99)
		{
			print(d);
			ft_putchar(' ');
			print(e);
			if (d < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			e++;
		}
		d++;
	}
}
