/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:45:42 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:31:26 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Descripcion: Reserva memoria y la inicializa a 0
    Parametros:
        - count: numero de elementos a reservar
        - size: tamaño de cada elemento
    Retorno: puntero a la memoria reservada
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main(void)
{
    char *ptr;

    ptr = ft_calloc(10, sizeof(char));
    printf("%s\n", ptr);
    free(ptr);
    return (0);
}
*/