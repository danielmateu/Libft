/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:21:46 by damateu-          #+#    #+#             */
/*   Updated: 2024/02/02 13:21:02 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: 
		La funcion strchr() devuelve un puntero al primer caracter 'c' en la cadena 's'
		La terminacion nula
	Parametros:
		- s: cadena en la que buscar
		- c: caracter a buscar
	Retorno: puntero a la primera ocurrencia del caracter c en la cadena s
			 NULL si no se encuentra
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}

/*
	int main()
	{
		char *s = "hola";
		char c = 'a';
		printf("%s", ft_strchr(s, c));
		return (0);
	}
*/
