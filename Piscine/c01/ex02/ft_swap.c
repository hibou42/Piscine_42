/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:23:06 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/17 19:48:06 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tempory;

	tempory = *a;
	*a = *b;
	*b = tempory;
}
/*
#include<stdio.h>

int main(void)
{
	int x;
	int y;

	x = 42;
	y = 21;
	printf("%d | %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d | %d", x, y);
	return(0);
}
*/
