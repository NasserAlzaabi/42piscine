/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:14:12 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/24 18:57:32 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char str[])
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int ac, char *av[])
{
	int	i;
	int	x;
	int	j;

	j = 0;
	i = 0;
	x = 0;
	if (ac ==3)
	{
		while (av[2][i])
		{
			if (av[1][x] == av[2][i])
				x++;
			i++;
		}
		if (x == ft_strlen(av[1]))
		{
			while (av[1][j])
			{
				write(1, &av[1][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
}
