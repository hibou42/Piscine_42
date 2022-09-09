/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:31:14 by synicole          #+#    #+#             */
/*   Updated: 2022/07/31 18:05:56 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_trim_space(char *dic);
char	*ft_strcat(char *dest, char *src);
void	ft_numbers(char *dictonary, char *nbr);
void	ft_putstr(char *str);

void	ft_findbyindex(char *dictonary, char *nbr)
{
	int		i;
	int		j;
	char	index_dictonary[100];
	char	value_dictonary[100];

	i = 0;
	while (dictonary[i] != '\n' && dictonary[i] != '\0')
	{
		j = 0;
		while (dictonary[i] != ':')
		{
			index_dictonary[j] = dictonary[i];
			j++;
			i++;
		}
		index_dictonary[j] = '\0';
		i++;
		j = 0;
		while (dictonary[i] != '\n')
		{
			value_dictonary[j] = dictonary[i];
			j++;
			i++;
		}
		value_dictonary[j] = '\0';
		if (ft_strcmp(nbr, index_dictonary) == 0)
		{
			ft_putstr(value_dictonary);
			ft_putstr(" ");
		}
		i++;
	}
}

void	ft_parse_dic(char *dictonary, char *nbr)
{	
	ft_trim_space(dictonary);
	ft_numbers(dictonary, nbr);
}

int	ft_find_in_dic(char *dic_path, char *nbr)
{
	char	buffer[4096];
	int		file;
	int		i;

	if (!dic_path)
		file = open("numbers.dict", O_RDONLY);
	else
		file = open(dic_path, O_RDONLY);
	if (file < 0)
	{
		write(2, "Dict Error\n", 11);
		return (-1);
	}
	i = 0;
	while (read(file, buffer + i, 1) == 1)
	{
		if (i >= (4096 - 1))
		{
			write(2, "Dict Error\n", 11);
			return (-1);
		}
		i++;
	}
	buffer[i] = '\0';
	ft_parse_dic(buffer, nbr);
	return (0);
}
