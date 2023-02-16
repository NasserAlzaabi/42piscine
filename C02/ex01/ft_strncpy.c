/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:42:46 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/15 13:25:14 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[40] = "This is a test";
	char	str2[12];

	ft_strncpy(str2, str1, 10);
	printf("%s", str2);
}*/
