/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:20:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/16 13:49:23 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;

    if (!dst && !src)
        return (NULL);
    d = (char *)dst;
    s = (char *)src;
    if (s < d)
    {
        while (len--)
        {
            d[len] = s[len];
        }
    }
    else
    {
        while (len--)
        {
            *d++ = *s++;
        }
    }
    return (dst);
}
/*
int main()
{
    char src[] = "GeeksForGeeks";
    char dest[] = "GeeksForGeeks";
    ft_memmove(dest + 5, dest, strlen(dest) + 1);
    printf("Resultado: %s", dest);
    return 0;
}
*/