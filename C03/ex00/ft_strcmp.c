/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:49:15 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/14 21:06:07 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] == s2[x]) && s1[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
/*
int	main(void)
{
	char	str1[] = "this is the same";
	char	str2[] = "this is the same";

	printf("%d", ft_strcmp(str1, str2));
}*/
