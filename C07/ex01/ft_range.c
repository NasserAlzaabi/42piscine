/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:57:18 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/22 18:18:40 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*m;

	i = 0;
	if (min >= max)
		return (0);
	m = (int *) malloc (sizeof(int) * (max - min));
	if (!m)
		return (0);
	while (i < (max - min))
	{
		m[i] = min + i;
		i++;
	}
	return (m);
}
