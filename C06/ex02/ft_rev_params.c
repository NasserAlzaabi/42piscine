/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:18:17 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/16 18:58:32 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = argc - 1;
	if (argc > 1)
	{
		while (x >= 1)
		{
			i = 0;
			while (argv[x][i] != '\0')
			{
				write (1, &argv[x][i], 1);
				i++;
			}
			x--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
