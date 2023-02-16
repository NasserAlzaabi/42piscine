/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:47:14 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/24 14:19:50 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	i;
	char t;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
			{
				t = av[1][i] + 1;
				write(1, &t, 1);
			}
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
			{
				t = av[1][i] - 25;
				write(1, &t, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
	}
	}
	write(1, "\n", 1);
}
