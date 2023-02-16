/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:58:21 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/10 22:11:43 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_int(int a)
{
	char	*nums;

	nums = "0123456789";
	write(1, nums + a, 1);
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{	
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				ft_putchar(one, two, three);
				three++;
			}
			two++;
		}
		one++;
	}	
}
/*
int	main(void)
{
	ft_print_comb();
}*/
