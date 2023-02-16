/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:50:48 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/17 19:44:56 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	s;

	s = 1;
	i = 0;
	x = 0;
	while (space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{	
		s *= -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - 48);
		i++;
	}
	return (x * s);
}
/*
int	main()
{
	printf("%d", ft_atoi("   ---+--+1234ab567"));
}*/
