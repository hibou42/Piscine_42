/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:03:13 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 15:28:07 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	temp;

	c = 1;
	while (c < argc)
	{
		temp = 0;
		while (argv[c][temp] != '\0')
		{
			write (1, &argv[c][temp], 1);
			temp++;
		}
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
