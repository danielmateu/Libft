/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:10:20 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/12 13:48:30 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;
    if (dst == 0 && src == 0)
        return (NULL);
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return (dst);
}
/*
30 int main(void)
31 {
32     char src[] = "Good Bye";
33     char dst[] = "Hello world";
34
35     printf("Antes de llamar la funcion, dest = %s\n", dst);
36     ft_memcpy(dst, src, 9);
37     printf("Despues de llamar la funcion, dest = %s\n", dst);
38
39     return (0);
40 }
41 */