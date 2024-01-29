/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:43:09 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 13:15:41 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Param. #1: La primera string.
** Param. #2: La string a añadir a ’s1’.
** Return value: 
	La nueva string.
	NULL si falla la reserva de memoria.
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