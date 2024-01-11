/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:24:24 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/09 16:40:34 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
	char c;

	c = 'a';
	printf("%c", ft_touper(c));
	return (0);
}
*/
