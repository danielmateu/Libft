/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:21:46 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/11 14:17:42 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}
