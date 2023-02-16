/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:15:58 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/22 15:56:50 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int			i;
	int			x;
	char		*des;

	x = 0;
	i = 0;
	while (src[x])
		x++;
	des = (char *) malloc(sizeof(char) * x + 1);
	if (!des)
		return (0);
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
