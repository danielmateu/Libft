/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:58:59 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/26 17:32:28 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: 
	La funcion strncmp() compara a lo sumo los primeros n bytes de s1 y s2.

	Parametros:
	s1: Cadena a comparar.
	s2: Cadena a comparar.
	n: Numero maximo de bytes a comparar.

	Devuelve:
	Devuelve un entero menor que, igual a, o mayor que cero si los primeros n 
	bytes de s1 son, respectivamente, menores que, iguales a, o mayores que 
	los primeros n bytes de s2. 
	
*/

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char *str = "abcdefg";
	char *str2 = "abcdef";
	printf("%d\n", ft_strncmp(str, str2, 8));
	printf("%d\n", strncmp(str, str2, 4));
	return (0);
}
*/
