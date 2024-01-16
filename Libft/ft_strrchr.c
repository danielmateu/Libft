/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:02:24 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/16 14:02:27 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	c = (unsigned char)c;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		last = (char *)s;
	return (last);
}
/*
int main()
{
    char str[] = "Hello World";
    char *ret;

    ret = ft_strrchr(str, 'l');
    printf("String after |%c| is - |%s|\n", 'l', ret);

    return (0);
}
*/