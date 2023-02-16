/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:45:58 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/09 20:14:49 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char x)
{
	write(1, &x, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	if (n < 0)
	{
		ft_putchar('N');
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
}*/
