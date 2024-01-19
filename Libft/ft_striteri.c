/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:25 by dani              #+#    #+#             */
/*   Updated: 2024/01/16 15:14:25 by dani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Descripcion: Aplica la funcion f a cada caracter de la cadena de caracteres pasada como argumento. Cada caracter se pasa por direccion a la funcion f para ser modificado si es necesario.
** Return value: None
** Parametros: #1. La cadena de caracteres sobre la cual iterar.
** #2. La funcion a aplicar a cada caracter de s y su indice.
** External functs: None
*/

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

void toupper_wrapper(unsigned int i, char *c)
{
    (void)i; // Ignora el argumento i si no lo necesitas
    *c = (char)ft_toupper((int)*c);
}

int main()
{
    char *str = "hola";
    ft_striteri(str, &toupper_wrapper);
    printf("%s\n", str);
    return (0);
}