/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:13:12 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:50:38 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: Rellena un bloque de memoria con un valor
	Parametros:
		- b: bloque de memoria a rellenar
		- c: valor a rellenar
		- len: numero de bytes a rellenar
	Retorno: bloque de memoria rellenado

	Puntualizacion: usamos un puntero a unsigned char para poder rellenar
	byte a byte
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len--)
		*str++ = (unsigned char)c;
	return (b);
}
/*
int main()
{
	char str[] = "Hello world!";
	ft_memset (str, '-', 3);
	puts (str);
	return 0;
}
*/
