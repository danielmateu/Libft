/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:24:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 16:51:51 by damateu-         ###   ########.fr       */
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

int calculate_sign(int n)
{
    int sign;
    if (n < 0)
        sign = -1;
    else
        sign = 1;
    return (sign);
}

int calculate_len(int n)
{
    int len;
    if (n <= 0)
        len = 1;
    else
        len = 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    long    num;
    int     len;
    int     sign;
    char    *str;

    sign = calculate_sign(n);
    num = (long)n * sign;
    len = calculate_len(n);
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
    int n2 = 2147483647;
    int n3 = 0;
    int n4 = 9;
    printf("%s\n", ft_itoa(n));
    printf("%s\n", ft_itoa(n2));
    printf("%s\n", ft_itoa(n3));
    printf("%s\n", ft_itoa(n4));
    return (0);
}
*/
