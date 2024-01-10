/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:21:58 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/10 15:26:25 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}

int main(void){
    char *str = "Hello World";
    char *ptr;

    ptr = ft_strrchr(str, 'l');
    printf("The string after 'l' is: %s\n", ptr);
    return (0);
}
