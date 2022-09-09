/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:00:38 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/02 19:54:09 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	int		x;
	char	*i;

	c = 0;
	while (src[c] != '\0')
		c++;
	i = malloc((c + 1) * sizeof(char));
	if (!i)
		return (0);
	x = 0;
	while (x <= c)
	{
		i[x] = src[x];
		x++;
	}
	return (i);
}
