/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:43:09 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 15:17:40 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Param. #1: The prefix string. 
** Param. #2: The suffix string.
** Return value: The new string. NULL if the allocation fails.
** Descripcion: Reserva memoria (con malloc(3)) y devuelve la nueva
** cadena de caracteres que resulta de la concatenación de ’s1’ y ’s2’.
*/

#include "libft.h"
/*
int ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len])
        len++;
    return len;
}
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
int main()
{
    char *s1 = "Hello ";
    char *s2 = "World";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}
*/