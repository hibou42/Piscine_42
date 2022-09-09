/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:06:18 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/17 15:48:06 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include<stdio.h>
#include<unistd.h>
int	main(void)
{
	int *nbr;
    
	ft_ft(nbr);
	write(1, nbr, 2);     // pourquoi pas * ou & | car write demande une adresse pour ecrire !!!
	printf("%d", *nbr);   // pourquoi *
	return(0);
}
