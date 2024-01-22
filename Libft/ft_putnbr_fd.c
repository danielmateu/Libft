/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:29:43 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 16:53:17 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Descripcion: Escribe el entero n en el file descriptor fd.
    Parametros: #1. El entero a escribir.
                #2. El file descriptor.
    Valor de retorno: Nada.
    Funciones externas: write.
*/

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
    long int	nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if ((nb / 10) > 0)
        ft_putnbr_fd((nb / 10), fd);
    ft_putchar_fd(((nb % 10) + '0'), fd);
}
/*
int main(void)
{
    ft_putnbr_fd(123, 1);
    return (0);
}
*/