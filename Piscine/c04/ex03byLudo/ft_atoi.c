/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:33:39 by aschaefe          #+#    #+#             */
/*   Updated: 2022/08/02 13:34:04 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
    int    count;
    int    negative;
    int    number;

    count = 0;
    negative = 0;
    number = 0;
    while ((str[count] > 8 && str[count] < 14) || (str[count] == 32))
        count++;
    while ((str[count] != '\0') && (str[count] == '+' || str[count] == '-'))
    {
        if (str[count] == '-')
            negative++;
        count++;
    }
    while ((str[count] != '\0') && (str[count] >= 48 && str[count] <= 57))
    {
        number = number * 10 + str[count] - 48;
        count ++;
    }
    if (negative % 2 != 0)
        return (number * -1);
    return (number);
}
