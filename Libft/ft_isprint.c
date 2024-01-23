/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:34:32 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:37:02 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: Comprueba si el caracter es imprimible
	Parametros:
		- c: caracter a comprobar
	Retorno: 1 si es imprimible, 0 si no lo es
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int main()
{
	char c = 'a';
	printf("%d", ft_isprint(c));
	return (0);
}
*/
