/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:59:42 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/09 16:07:32 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta función es una implementación personalizada de la función estándar de la biblioteca de C strchr. La función strchr busca la primera ocurrencia de un carácter específico en una cadena de caracteres.

Esta función busca el carácter c en la cadena s y devuelve un puntero al primer lugar donde se encuentra c, o NULL si c no se encuentra en la cadena.
*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    if (*s == c)
        return ((char *)s);
    return (NULL);
}

// Test main
int main(void)
{
    char *str = "Hello World";
    char *ptr;

    ptr = ft_strchr(str, 'W');
    printf("The substring starting from W is: %s\n", ptr);
    return (0);
}

