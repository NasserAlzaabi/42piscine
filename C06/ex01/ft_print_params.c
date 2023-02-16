/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:51:37 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/16 19:14:21 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			i = 0;
			while (argv[x][i] != '\0')
			{
				write (1, &argv[x][i], 1);
				i++;
			}
			x++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
