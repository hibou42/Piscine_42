/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:44:37 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 17:28:44 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	c;

	c = nb - 1;
	if (nb < 2)
		return (0);
	while (c > 1)
	{
		if ((nb % c) == 0)
			return (0);
		c--;
	}
	return (1);
}

/*
#include<stdio.h>
int	main (void)
{
	int	nb;

	nb = 15331;
	printf("%d", ft_is_prime(nb));
	return (0);
}
*/
