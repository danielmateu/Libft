/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:40:34 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:42:03 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Busca un caracter en un string
    Parametros:
        - s: string en el que buscar
        - c: caracter a buscar
        - n: numero de caracteres a buscar
    Retorno: puntero al caracter encontrado

*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "Hello World";
    char *ptr;
    ptr = ft_memchr(str, 'H', 11);
    printf("%s\n", ptr);
    return (0);
}
*/