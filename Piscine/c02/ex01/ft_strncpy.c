/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:19:19 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/19 17:06:09 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int main (void)
{
	char	src[100] = "Hello";
	char	dest[100];
	char	src2[100] = "Hello";
	char	dest2[100];
		
	printf("3 origin --> %s\n", strncpy(dest, src, 3));
	printf("3 custom --> %s\n", ft_strncpy(dest2, src2, 3));
    printf("5 origin --> %s\n", strncpy(dest, src, 5));
    printf("5 custom --> %s\n", ft_strncpy(dest2, src2, 5));
    printf("8 origin --> %s\n", strncpy(dest, src, 8));
    printf("8 custom --> %s\n", ft_strncpy(dest2, src2, 8));

	return(0);
}
*/
