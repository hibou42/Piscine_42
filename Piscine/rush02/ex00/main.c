/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:30:58 by synicole          #+#    #+#             */
/*   Updated: 2022/07/31 18:05:11 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_find_in_dic(char *dic_path, char *nbr);
char	*ft_check(int argc, char **argv);
void	ft_find(long nbr, char **dictionary);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	*nbr;

	nbr = ft_check(argc, argv);
	if (ft_strcmp(nbr, "-1") == 0)
		return (0);
	if (argc == 3)
		ft_find_in_dic(argv[1], nbr);
	else
		ft_find_in_dic(0, nbr);
	return (0);
}
