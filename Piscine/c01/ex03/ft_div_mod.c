/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:54:32 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/17 20:02:16 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 16;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d \n%d", x, y);
	return(0);
}
*/
