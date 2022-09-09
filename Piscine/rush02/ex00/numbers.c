/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:41:37 by synicole          #+#    #+#             */
/*   Updated: 2022/07/31 18:00:17 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
void	ft_findbyindex(char *dictonary, char *nbr);
char	*ft_strcat(char *dest, char *src);
char	*ft_itoa(int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_atoi(char *str);

void	ft_0to999(char *dictonary, int nbr)
{
	int	c;
	int	d;
	int	u;

	c = nbr / 100;
	d = (nbr / 10) % 10;
	u = nbr % 10;
	if (c != 0)
	{
		ft_findbyindex(dictonary, ft_itoa(c));
		ft_findbyindex(dictonary, "100");
	}
	if (d >= 2 && u != 0)
	{
		ft_findbyindex(dictonary, ft_itoa(d * 10));
		ft_findbyindex(dictonary, ft_itoa(u));
	}
	else
	{
		if (!(c != 0 && (d * 10) + u == 0))
			ft_findbyindex(dictonary, ft_itoa((d * 10) + u));
	}
}

void	ft_numbers(char *dictonary, char *nbr)
{
	ft_0to999(dictonary, ft_atoi(nbr));
}
