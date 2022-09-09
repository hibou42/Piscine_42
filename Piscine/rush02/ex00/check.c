/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:07:47 by synicole          #+#    #+#             */
/*   Updated: 2022/07/31 15:27:15 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

char	*ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Error\n", 6);
			return ("-1");
		}
		i++;
	}
	return (str);
}

char	*ft_check(int argc, char **argv)
{
	char	*nbr;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return ("-1");
	}
	if (argc > 3)
	{
		write(2, "Error\n", 6);
		return ("-1");
	}
	if (argc == 3)
		nbr = ft_str_is_numeric(argv[2]);
	else
		nbr = ft_str_is_numeric(argv[1]);
	if (ft_strlen(nbr) > 37)
	{
		write(2, "Error\n", 11);
		return ("-1");
	}
	return (nbr);
}
