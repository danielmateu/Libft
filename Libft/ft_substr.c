/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:19:37 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/18 17:54:27 by damateu-         ###   ########.fr       */
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
    Description:
        Allocates (with malloc(3)) and returns a substring from the string ’s’.
        The substring begins at index ’start’ and is of maximum size ’len’.
*/

int	ft_strlen(const char *str)
{
    unsigned int	i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    size_t str_len = ft_strlen(s);
    if (start > str_len)
    {
        str = (char *)malloc(sizeof(char) * 1);
        if (!str){
            return (NULL);
        }
        str[0] = '\0';
        return (str); 
    }
    size_t substr_len = str_len - start;
    if (len > substr_len)
        len = substr_len;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len && s[start + i] && s[start + i] != '\0')
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
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
