/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:07:45 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/01 15:59:26 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
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
	return (result);
}

/*
#include<stdio.h>
int	main (void)
{
	int min, max;
	int	c;
	int *result;

	min = 10;
	max = -5;
	result = ft_range(min, max);
	
	c = 0;
	if (result == 0)
		return (0);
	while(c < max - min)
	{
		printf("%d, ", result[c]);
		c++;
	}
	return (0);
}
*/
