/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:26:01 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/30 09:15:54 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}


#include<stdio.h>
int	main (void)
{
	int	x;

	x = 7;
	x = ft_recursive_factorial(x);
	printf("%d", x);
	return (0);
}

