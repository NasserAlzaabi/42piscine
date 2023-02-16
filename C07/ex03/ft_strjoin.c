/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:13:46 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/22 18:17:06 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*des;
	int		i;
	int		x;
	int		z;

	i = 0;
	z = 0;
	des = malloc(sizeof(strs));
	while (i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			des[z] = strs[i][x];
			x++;
			z++;
		}
		x = 0;
		while (sep[x] && 1 < (size - 1))
			des[z++] = sep[x++];
		i++;
	}
	des[z] = '\0';
	return (des);
}
