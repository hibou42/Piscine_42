/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:39:32 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/24 15:20:23 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>
int	main (void)
{	
	char	src[100] = "World";
	char	dest[100] = "Hello_";
	char	srcOri[100] = "World";
	char	destOri[100] = "Hello_";

	printf("custum --> %s\n", ft_strcat(dest, src));
	printf("origin --> %s\n", strcat(destOri, srcOri));
	return (0);
}
*/
