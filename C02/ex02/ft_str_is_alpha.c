/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:02:13 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/13 16:22:14 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	f;

	f = 0;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
			f++;
		else if (*str >= 'A' && *str <= 'Z')
			f++;
		else
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "Thidfg";
	int	a;

	a = ft_str_is_alpha(str);
	printf("%d", a);
}*/
