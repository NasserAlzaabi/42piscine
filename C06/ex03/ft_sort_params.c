/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:14:55 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/21 16:29:50 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int size, char **str)
{
	int		x;
	int		i;
	char	*t;

	x = 0;
	while (x < size - 1)
	{
		i = 1;
		while (i < (size - x - 1))
		{
			if ((ft_strcmp(str[i], str[i + 1]) > 0))
			{
				t = str[i];
				str[i] = str[i + 1];
				str[i + 1] = t;
			}
			i++;
		}
		x++;
	}
}

int	main(int ac, char **argv)
{
	int	i;
	int	x;

	ft_sort(ac, argv);
	i = 1;
	while (i < ac)
	{
		x = 0;
		while (argv[i][x])
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
