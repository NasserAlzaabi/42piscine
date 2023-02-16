/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:10:49 by naalzaab          #+#    #+#             */
/*   Updated: 2022/08/11 17:19:23 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	v1;
	int	v2;

	v1 = *a;
	v2 = *b;
	*a = (v1 / v2);
	*b = (v1 % v2);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 18;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf(" %d", b);
}*/
