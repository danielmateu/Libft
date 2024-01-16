/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:43:09 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/16 13:55:00 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Param. #1: The prefix string. 
** Param. #2: The suffix string.
** Return value: The new string. NULL if the allocation fails.
** Description: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
*/


#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int j;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)); 
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}

/*
int main()
{
    char *s1 = "Hello";
    char *s2 = "World";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}
*/
