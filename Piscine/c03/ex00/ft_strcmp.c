/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:11:27 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/27 14:47:36 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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


#include<stdio.h>
#include<string.h>
int	main (void)
{
	char	str1[100] = "abcZ";
	char	str2[100] = "abca";

	printf("custom --> %d\n", ft_strcmp(str1, str2));	
	printf("origin --> %d\n", strcmp(str1, str2));	
	return(0);
}

