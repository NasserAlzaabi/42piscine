/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:05:43 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/22 18:18:17 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	x;
	int	*t;

	x = 0;
	if (min >= max)
		*range = 0;
	else
	{
		l = max - min;
		t = (int *) malloc(l * sizeof(int));
		*range = t;
		if (!t)
			return (-1);
		while (x < l)
		{
			t[x] = min + x;
			x++;
		}
	}
	return (x);
}
