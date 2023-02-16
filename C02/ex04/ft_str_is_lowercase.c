/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:36:58 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/13 16:46:38 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
	char	str[] = "dfbnjgh";

	x = ft_str_is_lowercase(str);
	printf("%d", x);
}*/
