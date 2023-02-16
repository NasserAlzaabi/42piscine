/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:15:18 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/11 18:58:54 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	sub;

	x = 0;
	i = size - 1;
	while (x < size / 2)
	{
		sub = tab[x];
		tab[x] = tab[i];
		tab[i] = sub;
		i--;
		x++;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7};
	int	i;

	i = 0;
	ft_rev_int_tab(array, 7);
	while (i <= 6)
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
