/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:19:37 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 15:18:42 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Parameters:
        #1. s: The string from which to create the substring.
        #2. start: The start index of the substring in the string ’s’.
        #3. len: The maximum length of the substring.
    Return value:
        The substring. NULL if the allocation fails.
    External functions:
        malloc
    Descripcion:
        Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que
        resulta de la substracción de ’s’.
        El substring comienza en el índice ’start’ y tiene como tamaño máximo ’len’.
*/

// int	ft_strlen(const char *str)
// {
//     unsigned int	i;

//     i = 0;
//     while (str[i] != '\0')
//         i++;
//     return (i);
// }

char *allocate_and_fill(const char *s, size_t start, size_t len)
{
    char *str;
    size_t i = 0;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return (NULL);
    size_t str_len = ft_strlen(s);
    if (start > str_len)
    {
        char *str = (char *)malloc(sizeof(char));
        if (!str)
            return (NULL);
        str[0] = '\0';
        return (str); 
    }
    size_t substr_len = str_len - start;
    if (len > substr_len)
        len = substr_len;
    return allocate_and_fill(s, start, len);
}
/*
int main(void){
    // Test 1
    char str[] = "Hello World";
    printf("Test1: %s\n", ft_substr(str, 6, 5));

    // Test 2
    char str2[] = "Hello World";
    printf("Test2: %s\n", ft_substr(str2, 6, 6));

    // Test 3
    char str3[] = "Hello World";
    printf("Test3: %s\n", ft_substr(str3, 6, 7));
}
*/
