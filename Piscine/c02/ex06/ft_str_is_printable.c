/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:04:33 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/20 15:54:28 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char	str[100] = "\t";

	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/
