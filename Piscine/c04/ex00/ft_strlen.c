/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:13:31 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 08:30:55 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*
#include<stdio.h>
int	main (void)
{
	char	str[] = "Hibou";
	int		c;
	
	c = ft_strlen(str);
	printf("%d\n", c);
	return (0);
}
*/
