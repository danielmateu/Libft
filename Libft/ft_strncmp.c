/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:17:15 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/11 17:17:41 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while (str[i] && str2[i] && str[i] == str2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)str[i] - (unsigned char)str2[i]);
}

int main()
{
    char *str = "abc";
    char *str2 = "abc";
    printf("%d\n", ft_strncmp(str, str2, 3));
    printf("%d\n", strncmp(str, str2, 3));
    return (0);
}