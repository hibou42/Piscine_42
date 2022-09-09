/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:44:56 by aschaefe          #+#    #+#             */
/*   Updated: 2022/07/18 19:10:11 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	char srccustom[] = "hello";
	char src[] = "hello";
	char destcustom[] = "abcde";
	char dest[] = "abcde";
	
	printf("Custom --> %s\n", ft_strcpy(destcustom, srccustom));
	printf("Origin --> %s\n", strcpy(dest, src));

	return (0);
} 

Reponse
Custom --> hello
Origin --> hello  // donc tout est ok avec le code

Dans tout les cas suivant, le programme se compile sans probleme
MODIFICATION DANS LE MAIN (la magie noire arrive mnt)
_____________________________________________________
char srccustom[] = "hello";
char src[] = "hello";
char destcustom[] = "a";
char dest[] = "a";
Reponse
Custom --> hello
[1]    69959 illegal hardware instruction  ./a.out
_____________________________________________________
char srccustom[] = "hello";
char src[] = "hello";
char destcustom[] = "a";
char dest[] = "abcde";
Reponse
Custom --> hello
Origin --> llo
_____________________________________________________
char srccustom[] = "hello";
char src[] = "hello";
char destcustom[] = "abcde";
char dest[] = "a";
Reponse
Custom --> hello
[1]    70660 illegal hardware instruction  ./a.out

