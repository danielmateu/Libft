/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:20:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/12 14:23:44 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
    char *d;
    char *s;

    d = (char *)dst;
    s = (char *)src;
    if (s < d)
    {
        while (n--)
            d[n] = s[n];
    }
    else
        //ft_memcpy(d, s, n);
        // Sin usar ft_memcpy
    {
        while (n--)
            *d++ = *s++;
    }
    return (dst);
}

int main()
{
    char src[] = "GeeksForGeeks";
    char dest[] = "GeeksForGeeks";
    ft_memmove(dest + 5, dest, strlen(dest) + 1);
    printf("Resultado: %s", dest);
    return 0;
}