/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:24:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/16 14:07:49 by dani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Definicion: Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres representando el entero recibido como argumento. Los números negativos deben ser manejados.
** Negative numbers must be handled.
** Return value: The string representing the integer. NULL if the allocation fails.

** Parameters: #1. The integer to convert.
** External functs: malloc
*/

char    *ft_itoa(int n)
{
    long    num;
    int     len;
    int     sign;
    char    *str;

    sign = (n < 0) ? -1 : 1;
    num = (long)n * sign;
    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}
/*
int main(void)
{
    int n = -2147483648;
    printf("%s\n", ft_itoa(n));
    return (0);
}
*/