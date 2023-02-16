/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:07:00 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/20 13:27:57 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n <= 0)
		return (0);
	while (s1[x] == s2[x] && x < (n - 1) && s1[x] != '\0' && s2[x] != '\0')
		x++;
	return (s1[x] - s2[x]);
}
/*
int	main(void)
{
	char	str1[] = "qwerty";
	char	str2[] = "qwertl";

	printf("%d", ft_strncmp(str1, str2, 4));
}*/
