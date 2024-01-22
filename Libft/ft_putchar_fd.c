/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:11:45 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 14:13:16 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Descripcion: Escribe el caracter c sobre el descriptor de fichero fd.
** Return value: None
** Parametros: #1. El caracter a escribir.
** #2. El descriptor de fichero.
** External functs: write
*/

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    // Test para comprobar uso de ft_putchar_fd
    ft_putchar_fd('a', 1);
    return (0);
}