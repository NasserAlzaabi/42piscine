/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:48:06 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/13 16:55:22 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
	int	x;
	char	str[] = "ASDFG";

	x = ft_str_is_uppercase(str);
	printf("%d", x);
}*/
