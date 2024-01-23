/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:14:47 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:32:53 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: Comprueba si el caracter es alfanumerico
	Parametros:
		- c: caracter a comprobar
	Retorno: 1 si es alfanumerico, 0 si no lo es
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

/*
	int main()
	{
		char c = 'a';
		printf("%d", ft_isalnum(c));
		return (0);
	}
*/
