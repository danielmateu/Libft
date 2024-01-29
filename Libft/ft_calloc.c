/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:45:42 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 12:35:23 by damateu-         ###   ########.fr       */
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

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

int main(void)
{
    size_t count = 10;
    size_t size = sizeof(int);
    int *my_calloc = (int *)ft_calloc(count, size);
    int *original_calloc = (int *)calloc(count, size);

    if (my_calloc == NULL || original_calloc == NULL)
    {
        printf("La asignacion en memoria ha fallado\n");
        return 1;
    }

    while( count-- )
    {
        if (my_calloc[count] != 0 || original_calloc[count] != 0)
        {
            printf("Memoria no inicializada a 0 en el índice %zu.\n", count);
            return 1;
        }
    }

    // Si no ha fallado, se libera la memoria y se pasa el test
    printf("Ambas funciones han pasado el test.\n");
    free(my_calloc);
    free(original_calloc);
    return 0;
}
