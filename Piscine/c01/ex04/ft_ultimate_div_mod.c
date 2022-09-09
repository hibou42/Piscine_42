/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:29:40 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/17 20:09:39 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
#include<stdio.h>
int main(void)
{
	int a;
	int b;

	a = 16;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return(0);
}
*/
