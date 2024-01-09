/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:50:38 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/09 15:52:08 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int my_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

// Test main

#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);
    if(my_isprint(c))
        printf("The character is a printable character\n");
    else
        printf("The character is not a printable character\n");
    return (0);
}