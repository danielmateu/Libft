/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:22:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 16:58:11 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Descripcion: Escribe la cadena de caracteres s sobre el descriptor de fichero fd.
** Return value: None
** Parametros: #1. La cadena de caracteres a escribir.
** #2. El descriptor de fichero.
** External functs: write
*/

//ft_strlen
/*
size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
*/

void    ft_putstr_fd(char const *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
/*
int main(void)
{
    // Test para comprobar uso de ft_putstr_fd
    ft_putstr_fd("Hola", 1);
    return (0);
}
*/