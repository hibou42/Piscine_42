/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:36:35 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/18 10:17:50 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include<stdio.h>
int main()
{
	char	*str = "Hello";
	int i;
	
	i = ft_putstr(str);
	printf("%d", i);
	return(0);
}
