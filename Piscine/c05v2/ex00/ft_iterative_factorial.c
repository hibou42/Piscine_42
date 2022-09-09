/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:42:59 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 17:27:33 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	c;

	c = 0;
	temp = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		nb--;
		while (nb != 0)
		{
			temp = temp * nb;
			nb--;
		}
	}
	return (temp);
}

/*
#include<stdio.h>
int	main (void)
{
	int	x;
	
	x = 3;
	printf("%d", ft_iterative_factorial(x));
	return (0);
}
*/
