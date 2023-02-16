/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:20:53 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/17 15:27:00 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				x;
	int				i;
	unsigned int	n;

	x = 0;
	i = 0;
	n = 0;
	while (dest[x])
		x++;
	while (src[i] && n < nb)
	{
		dest[x] = src[i];
		n++;
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "efghijkl";

	printf("%s", ft_strncat(str1, str2, 5));
}*/
