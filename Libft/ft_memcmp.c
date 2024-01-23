/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:27 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:45:27 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Compara dos bloques de memoria
    Parametros:
        - s1: primer bloque de memoria
        - s2: segundo bloque de memoria
        - n: numero de bytes a comparar
    Retorno: 0 si son iguales, diferencia si no lo son

    Puntualizacion: iniciamos i a -1 para que en la primera iteracion sea 0
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = -1;
	if (n == 0)
		return (0);
	while (++i < n)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}
/*
int main(void)
{
    // Test1
    char str1[] = "Hel";
    char str2[] = "Hello";
    printf("Test1: %d\n", ft_memcmp(str1, str2, 11));
}
*/