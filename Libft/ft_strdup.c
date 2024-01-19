/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:36:04 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/17 12:38:28 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
    Definicion: Duplica una cadena de caracteres.
    Parametros: 
        - s1: Cadena de caracteres a duplicar.
    Retorno:
        - Cadena de caracteres duplicada.
*/

// int    ft_strlen(const char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//         i++;
//     return (i);
// }

char    *ft_strdup(const char *s1)
{
    char    *s2;
    int     i;

    i = 0;
    s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (!s2)
        return (NULL);
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
/*
int main()
{
    char *s1 = "Hola";
    char *s2 = ft_strdup(s1);
    printf("%s\n", s2);
    return (0);
}
*/