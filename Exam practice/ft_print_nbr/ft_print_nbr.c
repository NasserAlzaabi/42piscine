/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:02:59 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/23 20:52:19 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_nbr(int nbr)
{
	if (nbr > 9)
		ft_print_nbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}
int	main(void)
{
	ft_print_nbr(43);
}
