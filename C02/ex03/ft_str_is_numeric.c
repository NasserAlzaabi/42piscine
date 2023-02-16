/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:24:14 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/13 16:35:22 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			x++;
		else
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "5773232";
	int	a;

	a = ft_str_is_numeric(str);
	printf("%d", a);
}*/
