/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:53:31 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/24 16:15:38 by naalzaab         ###   ########.fr       */
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
	int	l;

	i = 0;
	if (ac == 4)
	{
		if (ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
		{	
			while (av[1][i])
			{
				if (av[1][i] == av[2][0])
				{
					av[1][i] = av[3][0];
					write(1, &av[1][i], 1);
				}
				else 
					write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
