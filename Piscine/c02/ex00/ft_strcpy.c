/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:44:56 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/19 14:42:46 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char tab[100] = "coucou";
	char dest[100] = "";

	char tab2[100] = "coucou";
	char dest2[100] = "";
	printf("origin --> %s\n", strcpy(dest, tab));
	printf("custom --> %s\n", ft_strcpy(dest2, tab2));
	return (0);
}
*/
