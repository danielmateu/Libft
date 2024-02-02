/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:00:16 by damateu-          #+#    #+#             */
/*   Updated: 2024/02/02 13:01:47 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Description: Copia n bytes de src a dst y garantiza que dst este terminado en NULL.
    Parametros:
        - dst: destino de la copia
        - src: origen de la copia
        - n: numero de bytes a copiar
    Retorno: 
        - La longitud de src
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int main()
{
    char *src = "Hello World";
    char dst[] = "";
    // Variable result para almacenar el resultado de la funcion
    size_t result;
    result = ft_strlcpy(dst, src, 8);
    printf("El resultado de la funcion ft_strlcpy es: %zu\n", result);
    
    return (0);
}

