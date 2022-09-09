/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:23:17 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/02 14:41:17 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_size_str(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_final_size(char **strings, int size, int sep_length)
{
	int	final_size;
	int	index;

	final_size = 0;
	index = 0;
	while (index < size)
	{
		final_size = final_size + ft_size_str(strings[index]);
		final_size = final_size + sep_length;
		index++;
	}
	final_size = final_size - sep_length;
	return (final_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_final_size(strs, size, ft_size_str(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	d = string;
	if (!string)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d = d + ft_size_str(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d = d + ft_size_str(sep);
		}
		index++;
	}
	return (string);
}

/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 13 + 1);
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "I Love Malloc";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
}
*/
