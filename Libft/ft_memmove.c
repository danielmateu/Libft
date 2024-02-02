/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:20:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/02/02 12:30:42 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Description: Copia n bytes de src a dst permitiendo que los buffers se 
	solapen sin corromper los datos.
    Parametros:
        - dst: destino de la copia
        - src: origen de la copia
        - n: numero de bytes a copiar
    Retorno: puntero a dst
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (s < d)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}


int	main(void)
{
	char src[] = "Good Bye";
	char dst[] = "Hello world";

	printf("Antes de llamar la funcion, dest = %s\n", dst);
	ft_memmove(dst, src, 5);
	printf("Despues de llamar la funcion, dest = %s\n", dst);

	return (0);
}



