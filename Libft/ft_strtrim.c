/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:08:52 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/16 17:26:13 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.

** Parameters 
** #1. The string to be trimmed. s1
** #2. The reference set of characters to trim. set

** Return value The trimmed string. NULL if the allocation fails.
*/

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1 + i);
    if (j)
        while (s1[i + j - 1] && ft_strchr(set, s1[i + j - 1]))
            j--;
    if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
        return (NULL);
    while (k < j)
        str[k++] = s1[i++];
    str[k] = '\0';
    return (str);
}

int main()
{
    char *s1;
    char *set;

    s1 = "  Hello World  ";
    set = " ";
    printf("%s", ft_strtrim(s1, set));
    return (0);
}