/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:00:44 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/11 19:31:04 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	sub;
	int	n;

	n = 0;
	x = 0;
	i = 1;
	while (n < size)
	{
		while (x < size)
		{
			sub = tab[i];
			if (tab[x] > tab[i])
			{
				tab[i] = tab[x];
				tab[x] = sub;
			}
			i++;
			x++;
		}
		n++;
		x = 0;
		i = 1;
	}
}
/*
int	main(void)
{
	int	arr[] = {4, 2, 7, 1, 3};
	int	i;

	i = 0;
	ft_sort_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
