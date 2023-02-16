/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:25:54 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/16 14:10:29 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;
	unsigned int	lend;
	unsigned int	lens;

	x = 0;
	i = 0;
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size < 1)
		return (lens + size);
	while (dest[x])
		x++;
	while (src[i] && x < size - 1)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	if (size < lend)
		return (lens + size);
	else
		return (lend + lens);
}
/*
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = " yes";

	ft_strlcat(str1, str2, 8);
	printf("%s", str1);
}*/
