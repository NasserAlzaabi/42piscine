/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:56:09 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/13 17:14:24 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
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
	char	str[] = "sdg";

	x = ft_str_is_printable(str);
	printf("%d", x);
}*/
