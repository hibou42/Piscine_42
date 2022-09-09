/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:09:10 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/27 11:47:48 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ret;

	ret = dest;
	while (*dest)
		++dest;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}

/*
#include<stdio.h>
#include<string.h>
int	main (void)
{
 	char	src3[100] = "World";
	char	dest3[100] = "Hello_";
	char	src3ori[100] = "World";
	char	dest3ori[100] = "Hello_";
	
 	char	src5[100] = "World";
	char	dest5[100] = "Hello_";
	char	src5ori[100] = "World";
	char	dest5ori[100] = "Hello_";
		
 	char	src8[100] = "World";
	char	dest8[100] = "Hello_";
	char	src8ori[100] = "World";
	char	dest8ori[100] = "Hello_";
	
	unsigned int	nb3;
	unsigned int	nb5;
	unsigned int	nb8;
	nb3 = 3;
	nb5 = 5;
	nb8 = 8;
	
	printf("%d cutom --> %s\n", nb3, ft_strncat(dest3, src3, nb3));
	printf("%d origi --> %s\n", nb3, strncat(dest3ori, src3ori, nb3));

	printf("%d cutom --> %s\n", nb5, ft_strncat(dest5, src5, nb5));
	printf("%d origi --> %s\n", nb5, strncat(dest5ori, src5ori, nb5));

	printf("%d cutom --> %s\n", nb8, ft_strncat(dest8, src8, nb8));
	printf("%d origi --> %s\n", nb8, strncat(dest8ori, src8ori, nb8));
	
	return (0);
}
*/
