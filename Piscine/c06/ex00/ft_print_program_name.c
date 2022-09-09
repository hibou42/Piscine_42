/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:20:39 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/28 15:32:37 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	(void)argc;
	c = 0;
	while (argv[0][c] != '\0')
	{
		write (1, &argv[0][c], 1);
		c++;
	}
	write (1, "\n", 1);
	return (0);
}
