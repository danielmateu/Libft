/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:30:49 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:36:45 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: Comprueba si el caracter es un digito
	Parametros:
		- c: caracter a comprobar
	Retorno: 1 si es un digito, 0 si no lo es
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int main()
{
	char c = 'a';
	printf("%d", ft_isdigit(c));
	return (0);
}
*/
