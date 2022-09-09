/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:29:07 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 17:28:02 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		power = power - 1;
		while (power > 0)
		{
			nb = nb * x;
			power--;
		}
	}
	return (nb);
}

/*
#include<stdio.h>
int	main (void)
{
	int nb;
	int power;

	nb = 2;
	power = 5;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
