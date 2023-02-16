/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:45:17 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/20 13:26:51 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0' || str[0] == '\0')
		return (str);
	while (str[x])
	{
		while (str[x + y] == to_find[y])
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "e";

	printf("%s", ft_strstr(str1, str2));
}*/
