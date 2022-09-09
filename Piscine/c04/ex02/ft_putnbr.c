/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:56:54 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 08:33:29 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_print('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_print(nb + 48);
}

/*
int	main (void)
{
	int nb;

	nb = -147483648;
	ft_putnbr(nb);
	return (0);
}
*/
