/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:50:52 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/09 15:52:40 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // if c is between a and z or A and Z
        return (1); // return 1
    else
        return (0); // else return 0
}
/*
#include <stdio.h>

int main()
{
    char c = 'a';
    printf("%d", ft_isalpha(c));
    return (0);
}
*/
