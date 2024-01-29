/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:08:52 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 13:34:52 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)

** Parameters 
** #1. s1: La string que debe ser recortada.
** #2. set: Los caracteres a eliminar de la string.

** Return:
** 	La string recortada. NULL si la reserva falla.La string recortada.
	NULL si falla la reserva de memoria.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = (ft_strlen(s1 + i));
	if (j)
		while (s1[i + j - 1] && ft_strchr(set, s1[i + j -1]))
			j--;
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while (k < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
/*
int main()
{
    char *s1;
    char *set;

    s1 = "  Hello World  ";
    set = " ";
    printf("%s", ft_strtrim(s1, set));
    return (0);
}
*/