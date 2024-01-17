/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:45:42 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/17 12:00:01 by damateu-         ###   ########.fr       */
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
/*
void    ft_bzero(void *s, size_t n)
{
    // memset(s, 0, n);
    // sin usar memset
    unsigned char *str;

    str = (unsigned char *)s;
    while (n--)
        *str++ = 0;
}
*/

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (!(ptr = malloc(count * size)))
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