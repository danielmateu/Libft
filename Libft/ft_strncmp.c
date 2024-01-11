/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:58:59 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/11 17:34:56 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char *str = "abcdefg";
	char *str2 = "abcdef";
	printf("%d\n", ft_strncmp(str, str2, 8));
	printf("%d\n", strncmp(str, str2, 4));
	return (0);
}
*/
