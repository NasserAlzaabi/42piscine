/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:40:03 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/21 00:18:06 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	num = 1;
	i = 0;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
