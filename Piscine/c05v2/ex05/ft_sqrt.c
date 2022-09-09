/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:08:17 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 17:28:37 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	unsigned int	c;

	c = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((c * c) < (unsigned int)nb)
		c++;
	if ((c * c) == (unsigned int)nb)
		return (c);
	return (0);
}

/*
#include<stdio.h>
int	main (void)
{
	int nb;

	nb = 2147395600;
	printf("%d", ft_sqrt(nb));
	return (0);
}
*/
