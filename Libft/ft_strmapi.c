/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:33:45 by dani              #+#    #+#             */
/*   Updated: 2024/01/16 14:33:45 by dani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Descripcion: Aplica la funcion f a cada caracter de la cadena de caracteres pasada como argumento para crear una nueva cadena de caracteres (con malloc(3)) que resulta de las aplicaciones sucesivas de f.
** Return value: La cadena de caracteres creada a partir de las aplicaciones sucesivas de f. Devuelve NULL si falla la asignacion de memoria.
** Parametros: #1. La cadena de caracteres sobre la cual iterar.
** #2. La funcion a aplicar a cada caracter de s.
** External functs: malloc
*/

#include "libft.h"

/*
int    ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

char toupper_wrapper(unsigned int i, char c)
{
    (void)i; // Ignora el argumento i si no lo necesitas
    return (char)ft_toupper((int)c);
}
*/

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     i;

    i = 0;
    if (!s || !f)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main(void)
{
    char *s = "hola";
    char (*f)(unsigned int, char);
    f = &toupper_wrapper;
    printf("%s\n", ft_strmapi(s, f));
    return (0);
}
*/
