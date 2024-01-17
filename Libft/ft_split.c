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

    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count + 1);
}

char **ft_split(char const *s, char c)
{
    char **strs;
    int i;
    int j;
    int k;
    int word_len;

    i = 0;
    j = 0;
    k = 0;
    strs = (char **)malloc(sizeof(char *) * count_words(s, c));
    if (!strs)
        return (NULL);

    while (s[i])
    {
        word_len = 0;
        while (s[i + word_len] && s[i + word_len] != c)
            word_len++;
        strs[j] = (char *)malloc(sizeof(char) * (word_len + 1)); // Allocate memory for strs[j], not strs
        if (!strs[j])
            return (NULL);
        i += word_len;
        j++;
    }
    strs[j][k] = '\0';
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