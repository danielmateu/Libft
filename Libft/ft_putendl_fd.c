/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:51:17 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:13:26 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Definicion: Escribe la cadena s en el file descriptor dado, seguido de un salto de linea.
    parametros: #1. La cadena que hay que escribir.
                #2. El file descriptor sobre el que hay que escribir.

    valor de retorno: nada.
    funciones externas: write
*/

#include "libft.h"
/*
int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
*/

void    ft_putendl_fd(char *s, int fd)
{
    char	n;

    n = '\n';
    if (s)
    {
        write(fd, s, ft_strlen(s));
        write(fd, &n, 1);
    }
}
/*
int main()
{
    char *s = "hola";
    int fd = 1;
    ft_putendl_fd(s, fd);
    return (0);
}
*/