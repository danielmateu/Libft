/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:05:56 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/17 17:04:53 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
    Definicion: Separa una cadena de caracteres en un array de cadenas de caracteres.
    Parametros:
        - s: Cadena de caracteres a separar.
        - c: Caracter delimitador.
    Retorno:
        - Array de cadenas de caracteres.
*/

int count_words(char const *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            count++;
            while (s[i] != '\0' && s[i] != c)
                i++;
        }
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **strs;
    int i, j, k, word_len;

    size_t word_count = count_words(s, c);
    strs = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!strs)
        return (NULL);

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        word_len = 0;
        while (s[i + word_len] != '\0' && s[i + word_len] != c)
            word_len++;
        strs[j] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!strs[j])
            return (NULL);
        k = 0;
        while (k < word_len)
        {
            strs[j][k] = s[i + k];
            k++;
        }
        strs[j][k] = '\0';
        i += word_len;
        j++;
    }
    strs[j] = '\0';
    return (strs);
}

int main()
{
    char **strs;
    int i;

    strs = ft_split("Hola que tal estas", ' ');
    i = 0;
    while (strs[i])
    {
        printf("%s\n", strs[i]);
        i++;
    }
    return (0);
}