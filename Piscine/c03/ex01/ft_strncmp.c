/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:47:34 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/24 17:54:03 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				temp;

	i = 0;
	temp = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{	
			if (s1[i] == '\0')
				return (0 - s2[i]);
			else if (s2[i] == '\0')
				return (s1[i]);
			temp = s1[i] - s2[i];
			return (temp);
		}
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
int	main (void)
{
	char			str1[100] = "abcde";
	char			str2[100] = "abcdeas";
	unsigned int	x = 3;
	unsigned int	y = 5;
	unsigned int	z = 8;	
	
	printf("3 custom --> %d\n", ft_strncmp(str1, str2, x));
	printf("3 origin --> %d\n", strncmp(str1, str2, x));
	printf("5 custom --> %d\n", ft_strncmp(str1, str2, y));
	printf("5 origin --> %d\n", strncmp(str1, str2, y));
	printf("8 custom --> %d\n", ft_strncmp(str1, str2, z));
	printf("8 origin --> %d\n", strncmp(str1, str2, z));
	return (0);
}
*/
