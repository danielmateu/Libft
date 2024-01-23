/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:29:20 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:30:07 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Rellena con 0s un string
    Parametros:
        - s: string a rellenar
        - n: numero de 0s a rellenar
    Retorno: nada
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}
/*
int main()
{
    char str[] = "Hello world!";
    ft_bzero (str, 0);
    // puts -> imprime el string
    puts (str);
    return 0;
}
*/
