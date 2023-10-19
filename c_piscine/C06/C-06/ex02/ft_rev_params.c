/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:56:00 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/28 18:57:14 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	if (argc > 1)
	{
		while (a >= 1)
		{
			b = 0;
			while (argv[a][b] != '\0')
				b++;
			write(1, argv[a], b);
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}
