/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:03:59 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/02 14:58:29 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include<stdio.h>
int	main(void)
{
	char	str[100] = "Hello";

	printf("%d", ft_str_is_alpha(str));
	return(0);
}
*/
