/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:07:36 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/09 20:12:34 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_int(int a)
{
	char	*num;

	num = "0123456789";
	write(1, num + a, 1);
}

void	ft_print_nums(int a, int b)
{
	ft_print_int(a);
	write(1, " ", 1);
	ft_print_int(b);
	write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	one;
	int	two;

	one = 0;
	while (one <= 98)
	{
		two = one + 1;
		while (two <= 99)
		{	
			ft_putchar((one / 10) + '0');
			ft_putchar((one % 10) + '0');
			ft_putchar(' ');
			ft_putchar((two / 10) + '0');
			ft_putchar((two % 10) + '0');
			if (!(one == 98 && two == 99))
				write(1, ", ", 2);
			two++;
		}
		one++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
