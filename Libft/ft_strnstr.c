/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:10:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 15:12:49 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Descripcion: Busca la primera ocurrencia de la subcadena needle en la cadena
** haystack, donde no mas de len caracteres son buscados. Los caracteres que
** aparecen despues de un caracter `\0' no son buscados.

** Return value: Devuelve un puntero a la primera ocurrencia de needle en
** haystack, o NULL si needle no esta en haystack. Si needle es una cadena vacia,
** haystack es devuelto.

** Parametros:
**      #1. La cadena en la que buscar.
**      #2. La subcadena a buscar.
**      #3. El numero maximo de caracteres a buscar.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    // Test para comprobar uso de ft_strnstr
    char str1[] = "Hello";
    char str2[] = "llo";
    printf("Test1: %s\n", ft_strnstr(str1, str2, 11));
}
*/