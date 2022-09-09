/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:17:31 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/02 14:22:10 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	size;
	int	*result;

	c = 0;
	if (min >= max)
		return (0);
	size = max - min;
	result = malloc(size * sizeof(int));
	while (c <= size - 1)
	{
		result[c] = min;
		c++;
		min++;
	}
	*range = result;
	return (size);
}

/*
#include<unistd.h>
int	main (void)
{
	int min, max;
	int	c;
	int size;
	int	**tab;

	tab = malloc(sizeof(int*));
	min = 1;
	max = 42;
	size = ft_ultimate_range(tab, min, max);
	printf("%d\n", size);
	c = 0;
	while (c < size)
	{
		printf("%d, ", tab[0][c]);
		c++;
	}
	return (0);
}
*/
