/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyean-wa <ethanyap8@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:41:27 by yyean-wa          #+#    #+#             */
/*   Updated: 2023/09/28 18:47:33 by yyean-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	while (argv[0][a] != '\0' && argc > 0)
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
