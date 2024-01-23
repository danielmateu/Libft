/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:10:20 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:47:26 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Description: Copia n bytes de src a dst
	Parametros:
		- dst: destino de la copia
		- src: origen de la copia
		- n: numero de bytes a copiar
	Retorno: puntero a dst
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char src[] = "Good Bye";
	char dst[] = "Hello world";

	printf("Antes de llamar la funcion, dest = %s\n", dst);
	ft_memcpy(dst, src, 9);
	printf("Despues de llamar la funcion, dest = %s\n", dst);

	return (0);
}
*/