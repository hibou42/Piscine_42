/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:50:19 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 17:28:17 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}


#include<stdio.h>
int	main (void)
{
	int	nb;
	int	power;

	nb = 11;
	power = 5;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}

