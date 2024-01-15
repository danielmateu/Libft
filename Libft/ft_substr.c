/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:19:37 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/15 17:28:17 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
    char *str;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    // Can't use ft_strlen because it's not allowed
    while (s[i])
        i++;

    if (start > i)
        //return (ft_strdup(""));
        // cant use ft_strdup because it's not allowed
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len && s[start])
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}

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
