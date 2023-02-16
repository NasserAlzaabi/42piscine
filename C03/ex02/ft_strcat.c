/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:34:30 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/15 15:19:54 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (dest[x] != '\0')
	{	
		x++;
	}
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "This is";
	char	str2[] = "nasser";

	printf("%s", ft_strcat(str1, str2));
}*/
